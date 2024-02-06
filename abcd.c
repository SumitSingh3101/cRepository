#include<stdio.h>

int main(){
    int p,n;
    float si, r;
    
    scanf("%d", &p);
    scanf("%d", &n);
    scanf("%f", &r);

    si = p*n*r/100;

    printf("simple interset for principal = %d time = %d years and rate of intrest = %f = %f", p, n, r, si);

    return 0;
}