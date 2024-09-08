#include<iostream>
using namespace std;

int main(){
    int n, sum=0;
    cout<<"Enter the number of elements : ";
    cin>>n;

    int arr[n-1];

    for(int i = 0; i<n-1; i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
        sum = sum + arr[i];
    }

    int total = ((n*(n+1))/2);

    n = total - sum;

    cout<<"The missing number is : "<<n;

    return 0;
}