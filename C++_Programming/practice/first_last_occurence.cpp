#include <iostream>
using namespace std;

// Function to find the first occurrence of the target
int first_occurrence(int arr[], int n, int target) {
    int start = 0, end = n - 1, mid, first = -1;
    
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            first = mid;
            end = mid - 1; // Move left to find the first occurrence
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return first;
}

// Function to find the last occurrence of the target
int last_occurrence(int arr[], int n, int target) {
    int start = 0, end = n - 1, mid, last = -1;
    
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            last = mid;
            start = mid + 1; // Move right to find the last occurrence
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return last;
}

int main() {
    int arr[1000];
    int n, target;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target element: ";
    cin >> target;

    cout << "First Occurrence: " << first_occurrence(arr, n, target) << endl;
    cout << "Last Occurrence: " << last_occurrence(arr, n, target) << endl;

    return 0;
}
