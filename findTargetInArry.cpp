#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 3, 45, 7, 19, 0, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 19;

    bool found = false;


    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            found = true;
            cout << "The number " << target << " is found at index " << i << "." << endl;
            break; // Stop 
        }
    }

    if(!found) {
        cout << "The number " << target << " is not found in the array." << endl;
    }

    return 0;
}