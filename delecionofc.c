#include <stdio.h>

int insert(int n){
    int temp, arr[n]
    for(int i=0, i<n, i++){
        printf("Enter the %d element: ", i+1);
        scanf("%d", &temp);
        arr[i] = temp;
    }
    print(n);
    return arr;
}

int delete(int arr,int n){
    int index;
    printf("Enter the index where you want to delet: ");
    scanf("%d", &index);
    for(int i = index, i<n,i++){
        arr[i] = arr[i+1];
    }
    print(n);
    return arr;
}

void print(int n){
    for(int i=0,i<n,i++){
        printf("%d ",arr[i]);
    }
}


int main(){
    char choice;
    int n;
    int arr[n];

 do{printf("Create arr(C) or Delet element(D) or Print(P) or Exit(E):");
    scanf("%c", &choice);

    if(choice=='C'){
        printf("Enter the number of element: ");
        scanf("%d",n);
        arr=insert(n);
    }else if(choice=='D'){
        arr=delete(arr,n);
    }else if(choice=='P'){
        print(n);
    }else{
        printf("incalide input ");
    }}while(choice!='E');
    
}