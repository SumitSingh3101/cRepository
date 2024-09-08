#include <stdio.h>

void facto(int n){

    static int fact, res;
    fact = n;
    res = 1;
    if (fact == 0){
        printf("1 = %d",res);

    }else{
        printf("%d",fact);
        printf(" *");
        res *= fact;
        --fact;
        facto(fact); 
    }

}


int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d \n", &num);
    facto(num);
    
    return 0;
}