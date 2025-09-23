#include <iostream>
#include <stdexcept>

template<typename T>
class DoublyLinkedList {
private:
    struct Node {
        T data;
        Node* next;
        Node* prev;
        
        Node(const T& value) : data(value), next(nullptr), prev(nullptr) {}
    };
    
    Node* head;
    Node* tail;
    size_t size;

public:
    // Constructor
    DoublyLinkedList() : head(nullptr), tail(nullptr), size(0) {}
    
    // Destructor
    ~DoublyLinkedList() {
        clear();
    }
    
    // Copy constructor
    DoublyLinkedList(const DoublyLinkedList& other) : head(nullptr), tail(nullptr), size(0) {
        Node* current = other.head;
        while (current != nullptr) {
            push_back(current->data);
            current = current->next;
        }
    }
    
    // Assignment operator
    DoublyLinkedList& operator=(const DoublyLinkedList& other) {
        if (this != &other) {
            clear();
            Node* current = other.head;
            while (current != nullptr) {
                push_back(current->data);
                current = current->next;
            }
        }
        return *this;
    }
    
    // Add element to the front
    void push_front(const T& value) {
        Node* newNode = new Node(value);
        
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        size++;
    }
    
    // Add element to the back
    void push_back(const T& value) {
        Node* newNode = new Node(value);
        
        if (tail == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        size++;
    }
    
    // Remove element from the front
    void pop_front() {
        if (head == nullptr) {
            throw std::runtime_error("Cannot pop from empty list");
        }
        
        Node* temp = head;
        head = head->next;
        
        if (head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }
        
        delete temp;
        size--;
    }
    
    // Remove element from the back
    void pop_back() {
        if (tail == nullptr) {
            throw std::runtime_error("Cannot pop from empty list");
        }
        
        Node* temp = tail;
        tail = tail->prev;
        
        if (tail != nullptr) {
            tail->next = nullptr;
        } else {
            head = nullptr;
        }
        
        delete temp;
        size--;
    }
    
    // Insert at specific position (0-indexed)
    void insert(size_t pos, const T& value) {
        if (pos > size) {
            throw std::out_of_range("Position out of range");
        }
        
        if (pos == 0) {
            push_front(value);
            return;
        }
        
        if (pos == size) {
            push_back(value);
            return;
        }
        
        Node* newNode = new Node(value);
        Node* current;
        
        // Choose the more efficient traversal direction
        if (pos <= size / 2) {
            // Traverse from head
            current = head;
            for (size_t i = 0; i < pos; i++) {
                current = current->next;
            }
        } else {
            // Traverse from tail
            current = tail;
            for (size_t i = size - 1; i > pos; i--) {
                current = current->prev;
            }
        }
        
        // Insert before current
        newNode->next = current;
        newNode->prev = current->prev;
        current->prev->next = newNode;
        current->prev = newNode;
        
        size++;
    }
    
    // Remove element at specific position
    void erase(size_t pos) {
        if (pos >= size) {
            throw std::out_of_range("Position out of range");
        }
        
        if (pos == 0) {
            pop_front();
            return;
        }
        
        if (pos == size - 1) {
            pop_back();
            return;
        }
        
        Node* current;
        
        // Choose the more efficient traversal direction
        if (pos <= size / 2) {
            // Traverse from head
            current = head;
            for (size_t i = 0; i < pos; i++) {
                current = current->next;
            }
        } else {
            // Traverse from tail
            current = tail;
            for (size_t i = size - 1; i > pos; i--) {
                current = current->prev;
            }
        }
        
        // Remove current node
        current->prev->next = current->next;
        current->next->prev = current->prev;
        
        delete current;
        size--;
    }
    
    // Remove first occurrence of value
    bool remove(const T& value) {
        Node* current = head;
        
        while (current != nullptr) {
            if (current->data == value) {
                if (current == head) {
                    pop_front();
                } else if (current == tail) {
                    pop_back();
                } else {
                    current->prev->next = current->next;
                    current->next->prev = current->prev;
                    delete current;
                    size--;
                }
                return true;
            }
            current = current->next;
        }
        
        return false;
    }
    
    // Remove all occurrences of value
    size_t remove_all(const T& value) {
        size_t removed = 0;
        Node* current = head;
        
        while (current != nullptr) {
            Node* next = current->next;
            if (current->data == value) {
                if (current == head) {
                    pop_front();
                } else if (current == tail) {
                    pop_back();
                } else {
                    current->prev->next = current->next;
                    current->next->prev = current->prev;
                    delete current;
                    size--;
                }
                removed++;
            }
            current = next;
        }
        
        return removed;
    }
    
    // Find element and return position (-1 if not found)
    int find(const T& value) const {
        Node* current = head;
        int pos = 0;
        
        while (current != nullptr) {
            if (current->data == value) {
                return pos;
            }
            current = current->next;
            pos++;
        }
        
        return -1;
    }
    
    // Find element from the back and return position (-1 if not found)
    int find_reverse(const T& value) const {
        Node* current = tail;
        int pos = size - 1;
        
        while (current != nullptr) {
            if (current->data == value) {
                return pos;
            }
            current = current->prev;
            pos--;
        }
        
        return -1;
    }
    
    // Access element at position
    T& at(size_t pos) {
        if (pos >= size) {
            throw std::out_of_range("Position out of range");
        }
        
        Node* current;
        
        // Choose the more efficient traversal direction
        if (pos <= size / 2) {
            current = head;
            for (size_t i = 0; i < pos; i++) {
                current = current->next;
            }
        } else {
            current = tail;
            for (size_t i = size - 1; i > pos; i--) {
                current = current->prev;
            }
        }
        
        return current->data;
    }
    
    const T& at(size_t pos) const {
        if (pos >= size) {
            throw std::out_of_range("Position out of range");
        }
        
        Node* current;
        
        // Choose the more efficient traversal direction
        if (pos <= size / 2) {
            current = head;
            for (size_t i = 0; i < pos; i++) {
                current = current->next;
            }
        } else {
            current = tail;
            for (size_t i = size - 1; i > pos; i--) {
                current = current->prev;
            }
        }
        
        return current->data;
    }
    
    // Get front element
    T& front() {
        if (head == nullptr) {
            throw std::runtime_error("List is empty");
        }
        return head->data;
    }
    
    const T& front() const {
        if (head == nullptr) {
            throw std::runtime_error("List is empty");
        }
        return head->data;
    }
    
    // Get back element
    T& back() {
        if (tail == nullptr) {
            throw std::runtime_error("List is empty");
        }
        return tail->data;
    }
    
    const T& back() const {
        if (tail == nullptr) {
            throw std::runtime_error("List is empty");
        }
        return tail->data;
    }
    
    // Check if list is empty
    bool empty() const {
        return size == 0;
    }
    
    // Get size of list
    size_t getSize() const {
        return size;
    }
    
    // Clear all elements
    void clear() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        tail = nullptr;
        size = 0;
    }
    
    // Reverse the list
    void reverse() {
        if (head == nullptr || head->next == nullptr) {
            return;
        }
        
        Node* current = head;
        Node* temp = nullptr;
        
        // Swap next and prev pointers for all nodes
        while (current != nullptr) {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev; // Move to next node (which is now prev)
        }
        
        // Swap head and tail
        temp = head;
        head = tail;
        tail = temp;
    }
    
    // Print the list forward
    void print() const {
        Node* current = head;
        std::cout << "[";
        while (current != nullptr) {
            std::cout << current->data;
            if (current->next != nullptr) {
                std::cout << ", ";
            }
            current = current->next;
        }
        std::cout << "]" << std::endl;
    }
    
    // Print the list backward
    void print_reverse() const {
        Node* current = tail;
        std::cout << "[";
        while (current != nullptr) {
            std::cout << current->data;
            if (current->prev != nullptr) {
                std::cout << ", ";
            }
            current = current->prev;
        }
        std::cout << "]" << std::endl;
    }
    
    // Iterator class for forward iteration
    class Iterator {
    private:
        Node* current;
        
    public:
        Iterator(Node* node) : current(node) {}
        
        T& operator*() {
            return current->data;
        }
        
        Iterator& operator++() {
            current = current->next;
            return *this;
        }
        
        Iterator operator++(int) {
            Iterator temp = *this;
            current = current->next;
            return temp;
        }
        
        Iterator& operator--() {
            current = current->prev;
            return *this;
        }
        
        Iterator operator--(int) {
            Iterator temp = *this;
            current = current->prev;
            return temp;
        }
        
        bool operator==(const Iterator& other) const {
            return current == other.current;
        }
        
        bool operator!=(const Iterator& other) const {
            return current != other.current;
        }
    };
    
    // Iterator functions
    Iterator begin() {
        return Iterator(head);
    }
    
    Iterator end() {
        return Iterator(nullptr);
    }
    
    Iterator rbegin() {
        return Iterator(tail);
    }
    
    Iterator rend() {
        return Iterator(nullptr);
    }
};

// Example usage
int main() {
    DoublyLinkedList<int> list;
    
    // Test basic operations
    std::cout << "Adding elements to the list..." << std::endl;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_front(0);
    list.print(); // Output: [0, 1, 2, 3]
    
    std::cout << "Size: " << list.getSize() << std::endl;
    
    // Test bidirectional printing
    std::cout << "Forward: ";
    list.print();
    std::cout << "Backward: ";
    list.print_reverse();
    
    // Test insertion
    list.insert(2, 15);
    std::cout << "After inserting 15 at position 2: ";
    list.print(); // Output: [0, 1, 15, 2, 3]
    
    // Test access (now more efficient for positions near the end)
    std::cout << "Element at position 2: " << list.at(2) << std::endl;
    std::cout << "Element at position 4: " << list.at(4) << std::endl;
    
    // Test bidirectional search
    std::cout << "Position of 15 (forward search): " << list.find(15) << std::endl;
    std::cout << "Position of 15 (backward search): " << list.find_reverse(15) << std::endl;
    
    // Test removal
    list.remove(15);
    std::cout << "After removing 15: ";
    list.print(); // Output: [0, 1, 2, 3]
    
    // Test multiple insertions and removals
    list.push_back(2);
    list.push_back(2);
    std::cout << "After adding more 2's: ";
    list.print(); // Output: [0, 1, 2, 3, 2, 2]
    
    size_t removed = list.remove_all(2);
    std::cout << "Removed " << removed << " occurrences of 2: ";
    list.print(); // Output: [0, 1, 3]
    
    // Test reverse
    list.reverse();
    std::cout << "After reversing: ";
    list.print(); // Output: [3, 1, 0]
    
    // Test iterator
    std::cout << "Using iterator (forward): ";
    for (auto it = list.begin(); it != list.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    // Test pop operations (now O(1) for both ends)
    list.pop_front();
    list.pop_back();
    std::cout << "After popping front and back: ";
    list.print(); // Output: [1]
    
    return 0;
}