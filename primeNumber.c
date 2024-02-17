#include <stdio.h>

int main(){

    int n, i, temp;
    temp=0;
    
    printf("enter no: ");
    scanf(" %d", &n);
    for(i=2;i<n;i++){
        if(n%i==0){
            temp = 1;
        }
    };
    if(temp==1){printf("//n The number %d isn't a prime number.", n);
    }else{printf("// The number %d is a prime number.", n);}

    return 0;
}