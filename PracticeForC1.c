#include<stdio.h>

int main(){
    int basic_salary;
    float gross_salary;
    float dearness_allowance, house_rest_allowence;
    

    printf("enter the value of basic saalary");
    scanf("%d", &basic_salary);
    dearness_allowance = basic_salary*40/100;
    house_rest_allowence = basic_salary*20/100;
    gross_salary = basic_salary + dearness_allowance + house_rest_allowence;

    printf("gross salary %f", gross_salary);
}