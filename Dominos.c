#include <stdio.h>

main(){

    printf("Welcome!, You are here for a order? \n");
    printf("Press the number for whatever you want to acess.\n");
    printf("Here is the menu, Sir./n");
    printf("1.Pizza \n2.Disert \n3.Drinks\n")
    int x,pizza,size,q;

    scanf("%d", &x);

    if(x == 1){
        printf("1.Cheese bust pizza\n");
        printf("2.Onion Pizza \n");
        printf("3.Capsium Pizza \n");
        printf("4.Perri Perri Pizza \n");
        printf("5.Paneer Makhani Pizza \n");
        scanf("Enter Here: %d", &pizza);
        if(pizza==1){
            printf("\nYou have selected Cheese bust pizza");
            printf("\nWhat size are you looking for.");
            printf("\n1.Small for 100rs \n2.Medium for 180rs\n3.Large for 250rs");
            scanf("\n Enter here: %d",&size);
            scanf("\nHow many do you want: %d",&q)


        }

    }else if(x == 2){
        printf("\n1.Ice cream\n");
        printf("2.Cake \n");
        printf("3.Sweets \n");
        printf("4.Choclates \n");
        printf("5.Sweet Bread \n");
    }else if(x == 3){
        printf("\n1.Pepsi \n");
        printf("2.Coke \n");
        printf("3.7up \n");
        printf("4.Mirinda \n");
        printf("5.Thumbs up \n");
    }else{
        printf("\nInvalid Input \n");
    }





}