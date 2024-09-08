#include<iostream>
using namespace std;


int main(){

    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    int arr[n], flag = 0;

    for(int i = 0; i<n; i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }


    for(int i = 0; i<n-2;i++){
        
            for(int j = i+1; j<n-1; j++){
7
                for(int k = j+1; k<n; k++){

                    if( (arr[i]+arr[j]+arr[k]) == 0){
                        cout<<"The numbers are : "<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                        flag = 1;
                    }

                }

            }

    }

    if(flag==1){
        cou<<"There are no such combinations.";
    }
    

}