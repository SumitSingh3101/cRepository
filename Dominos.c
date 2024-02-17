#include <stdio.h>

main(){

    printf("Welcome!, You are here for a order? \n");
    printf("Press the number for whatever you want to acess.\n");
    printf("Here is the menu, Sir./n");
    printf("1.Pizza \n2.Disert \n3.Drinks\n");
    int x,pizza,size,q,price;

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
            scanf("\nHow many do you want: %d",&q);
            if(size==1){
                price = 100 * q;
                printf("You have ordered A Small Cheese bust Pizza");
                printf("\nYour total is %drs", price);
            }else if(size===2){
                price = 180 * q;
                printf("You have ordered A Medium Cheese bust Pizza");
                printf("\nYour total is %drs", price);
            }else{
                price = 250 * q;
                printf("You have ordered A Large Cheese bust Pizza");
                printf("\nYour total is %drs", price);
            };
        }else if(pizza==2){
            printf("\nYou have selected Onion pizza");
            printf("\nWhat size are you looking for.");
            printf("\n1.Small for 100rs \n2.Medium for 180rs\n3.Large for 250rs");
            scanf("\n Enter here: %d",&size);
            scanf("\nHow many do you want: %d",&q);
            if(size==1){
                price = 100 * q;
                printf("You have ordered A Small Onion Pizza");
                printf("\nYour total is %drs", price);
            }else if(size==2){
                price = 180 * q;
                printf("You have ordered A Medium Onion Pizza");
                printf("\nYour total is %drs", price);
            }else{
                price = 250 * q;
                printf("You have ordered A Large Onion Pizza");
                printf("\nYour total is %drs", price);
            };
        }else if(pizza==3){
            printf("\nYou have selected Capsicum pizza");
            printf("\nWhat size are you looking for.");
            printf("\n1.Small for 100rs \n2.Medium for 180rs\n3.Large for 250rs");
            scanf("\n Enter here: %d",&size);
            scanf("\nHow many do you want: %d",&q);
            if(size==1){
                price = 100 * q;
                printf("You have ordered A Small Capsicum Pizza");
                printf("\nYour total is %drs", price);
            }else if(size==2){
                price = 180 * q;
                printf("You have ordered A Medium Capsicum Pizza");
                printf("\nYour total is %drs", price);
            }else{
                price = 250 * q;
                printf("You have ordered A Large Capsicum Pizza");
                printf("\nYour total is %drs", price);
            };
        }else if(pizza==4){
            printf("\nYou have selected Peri Peri pizza");
            printf("\nWhat size are you looking for.");
            printf("\n1.Small for 100rs \n2.Medium for 180rs\n3.Large for 250rs");
            scanf("\n Enter here: %d",&size);
            scanf("\nHow many do you want: %d",&q);
            if(size==1){
                price = 100 * q;
                printf("You have ordered A Small Peri Peri Pizza");
                printf("\nYour total is %drs", price);
            }else if(size==2){
                price = 180 * q;
                printf("You have ordered A Medium Peri Peri Pizza");
                printf("\nYour total is %drs", price);
            }else{
                price = 250 * q;
                printf("You have ordered A Large Peri Peri Pizza");
                printf("\nYour total is %drs", price);
            };
        }else{
            printf("\nYou have selected Paneer Makhani pizza");
            printf("\nWhat size are you looking for.");
            printf("\n1.Small for 100rs \n2.Medium for 180rs\n3.Large for 250rs");
            scanf("\n Enter here: %d",&size);
            scanf("\nHow many do you want: %d",&q);
            if(size==1){
                price = 100 * q;
                printf("You have ordered A Small Paneer Makhani Pizza");
                printf("\nYour total is %drs", price);
            }else if(size==2){
                price = 180 * q;
                printf("You have ordered A Medium Paneer Makhani Pizza");
                printf("\nYour total is %drs", price);
            }else{
                price = 250 * q;
                printf("You have ordered A Large Paneer Makhani Pizza");
                printf("\nYour total is %drs", price);
            };
        };

    }else if(x == 2){
        printf("\n1.Ice cream\n");
        printf("2.Cake \n");
        printf("3.Sweets \n");
        printf("4.Choclates \n");
        printf("5.Sweet Bread \n");
        scanf("Enter Here: %d" &pizza);
        if(pizza==1){
            printf("You Selected a Ice cream");
            printf("You will be Charged according to the MRP.")
        }else if(pizza==2){
            printf("You Selected a Cake");
            printf("You will be Charged according to the MRP.")
        }else if(pizza==3){
            printf("You Selected a Sweets");
            printf("You will be Charged according to the MRP.")
        }else if(pizza==4){
            printf("You Selected a Choclates");
            printf("You will be Charged according to the MRP.")
        }else{
            printf("You Selected a Sweet bread");
            printf("You will be Charged according to the MRP.")
        };
    }else if(x == 3){
        printf("\n1.Pepsi \n");
        printf("2.Coke \n");
        printf("3.7up \n");
        printf("4.Mirinda \n");
        printf("5.Thumbs up \n");
        scanf("Enter Here: %d", &pizza);
        if(pizza==1){
            printf("You Selected a Pepsi");
            printf("You will be Charged according to the MRP.")
        }else if(pizza==2){
            printf("You Selected a Coke");
            printf("You will be Charged according to the MRP.")
        }else if(pizza==3){
            printf("You Selected a 7p");
            printf("You will be Charged according to the MRP.")
        }else if(pizza==4){
            printf("You Selected a Mirinda");
            printf("You will be Charged according to the MRP.")
        }else{
            printf("You Selected a Thumbs up");
            printf("You will be Charged according to the MRP.")
        };
    }else{
        printf("\nInvalid Input \n");
    };
}