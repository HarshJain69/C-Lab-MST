/*Write a menu driven program that implement following operations (using separate functions) on a linear array:

     a) Insert a new element at end as well as at a given position

     b) Delete an element whose value is given or whose position is given

     c) To Traverse and display the elements of the linear array..*/
     #include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class LinearArray {
private:
    int arr[MAX_SIZE];
    int size;

public:
    LinearArray() {
        size = 0;
    }

    // Function to insert element at end
    void insertAtEnd(int value) {
        if (size < MAX_SIZE) {
            arr[size++] = value;
            cout << "Element inserted at the end successfully." << endl;
        } else {
            cout << "Array is full. Cannot insert element." << endl;
        }
    }

    // Function to insert element at given position
    void insertAtPosition(int value, int position) {
        if (size < MAX_SIZE && position >= 0 && position <= size) {
            for (int i = size; i > position; --i) {
                arr[i] = arr[i - 1];
            }
            arr[position] = value;
            size++;
            cout << "Element inserted at position " << position << " successfully." << endl;
        } else {
            cout << "Invalid position or array is full. Cannot insert element." << endl;
        }
    }

    // Function to delete element by value
    void deleteByValue(int value) {
        int found = 0;
        for (int i = 0; i < size; ++i) {
            if (arr[i] == value) {
                for (int j = i; j < size - 1; ++j) {
                    arr[j] = arr[j + 1];
                }
                size--;
                found = 1;
                cout << "Element " << value << " deleted successfully." << endl;
                break;
            }
        }
        if (!found) {
            cout << "Element not found in array." << endl;
        }
    }

    // Function to delete element by position
    void deleteByPosition(int position) {
        if (position >= 0 && position < size) {
            for (int i = position; i < size - 1; ++i) {
                arr[i] = arr[i + 1];
            }
            size--;
            cout << "Element at position " << position << " deleted successfully." << endl;
        } else {
            cout << "Invalid position. Cannot delete element." << endl;
        }
    }

    // Function to display elements of the array
    void display() {
        cout << "Elements of the array:" << endl;
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    LinearArray linearArray;
    char choice;
    int value, position;

    do {
        cout << "\n------ Menu ------" << endl;
        cout << "a) Insert at end" << endl;
        cout << "b) Insert at position" << endl;
        cout << "c) Delete by value" << endl;
        cout << "d) Delete by position" << endl;
        cout << "e) Display elements" << endl;
        cout << "f) Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 'a':
                cout << "Enter value to insert: ";
                cin >> value;
                linearArray.insertAtEnd(value);
                break;
            case 'b':
                cout << "Enter value to insert: ";
                cin >> value;
                cout << "Enter position to insert: ";
                cin >> position;
                linearArray.insertAtPosition(value, position);
                break;
            case 'c':
                cout << "Enter value to delete: ";
                cin >> value;
                linearArray.deleteByValue(value);
                break;
            case 'd':
                cout << "Enter position to delete: ";
                cin >> position;
                linearArray.deleteByPosition(position);
                break;
            case 'e':
                linearArray.display();
                break;
            case 'f':
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter again." << endl;
        }
    } while(choice != 'f');

    return 0;
}
