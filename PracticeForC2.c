#include<stdio.h>

int main(){
    float km, m, f, i, cm;
    printf("Enter the KiloMeters: ");
    scanf("%f", &km);

    m = km*1000;
    cm = m*100;
    i = cm/2.5;
    f = i/12;

    printf("\n KM in Meters: %f", m);
    printf("\n KM in Centimeters: %f", cm);
    printf("\n KM in Inches: %f", i);
    printf("\n KM in Feets: %f", f);
}