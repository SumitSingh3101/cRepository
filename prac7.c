#include <stdio.h>

float product(int a, float b){
    float res = b*a;
    return res;
}

int main(){
    int a;
    float b, res;
    scanf("%f%d", &a,&b);
    res = product(a,b);
    printf("%0.2f",res);
}  
