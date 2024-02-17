#include <stdio.h>

int main(){
    int num, ans;
    ans = 1;
    printf("Enter the Number: ");
    scanf("%d", &num);
    for(num;num>1;num--){
        ans=ans*num;
    }
    printf("The Factorial of %d! is: %d",num,ans);
}
