#include <stdio.h>

int mul(int a, int b, int c, int d){
    int s = a * b * c * d;
    return s;
}

int main(){
    int a,b,c,d,s;
    printf("Enter a,b,c,d:");
    scanf("%d %d %d %d", &a,&b,&c,&d);
    s = mul(a,b,c,d);
    printf("%d",s);
}