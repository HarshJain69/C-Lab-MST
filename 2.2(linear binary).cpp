// lenear search 
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i; // Return index of element if found
        }
    }
    return -1; // Return -1 if element not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter element to search: ";
    cin >> key;

    int index = linearSearch(arr, size, key);

    if (index != -1) {
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

//binary search 
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid; // Return index of element if found
        }

        if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; // Return -1 if element not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter element to search: ";
    cin >> key;

    int index = binarySearch(arr, size, key);

    if (index != -1) {
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
