#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter element to search: ";
    cin >> target;

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        cout << "Element " << target << " found at index: " << result << endl;
    } else {
        cout << "Element " << target << " not found." << endl;
    }

    return 0;
}
