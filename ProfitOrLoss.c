#include <stdio.h>

// Q1 - If cost price and selling price of an item is input through the keyboard, 
// write a program to determine whether the seller has made profit or incurred loss. 
// Also determine how much profit he made or loss he incurred.

int main(){
float cp, sp, x;

printf("Enter the Cost Price: ");
scanf("%f", &cp);

printf("\n Enter the selling Price: ");
scanf("%f", &sp);

x = sp - cp;

if( x > 0){
    printf("\n You have a profit of:  %f", &x);
}else{
    printf("You have a loss of:  %f", &x);
}


}