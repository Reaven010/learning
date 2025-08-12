public class InstanceVariableExample {
    String name; // This is an instance variable
    int age;     // This is an instance variable

    public InstanceVariableExample(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public void displayInfo() {
        System.out.println("Name: " + name + ", Age: " + age);
    }

    public static void main(String[] args) {
        InstanceVariableExample person1 = new InstanceVariableExample("Alice", 30);
        InstanceVariableExample person2 = new InstanceVariableExample("Bob", 25);

        person1.displayInfo(); // Output: Name: Alice, Age: 30
        person2.displayInfo(); // Output: Name: Bob, Age: 25
    }
    
}
