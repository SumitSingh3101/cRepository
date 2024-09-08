#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 3, 45, 7, 19, 0, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minVal = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < minVal) {
            minVal = arr[i];
        }
    }

    cout << "The minimum value in the array is: " << minVal << endl;

    return 0;
}
