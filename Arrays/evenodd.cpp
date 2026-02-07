#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 7, 10, 3, 12, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Process the array
    for(int i=0; i<n; i++) {
        if(i % 2 == 0) {
            // Even index
            arr[i] = arr[i] + 10;
        } else {
            // Odd index
            arr[i] = arr[i] * 2;
        }
    }

    cout << "Modified Array: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
