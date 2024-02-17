#include <stdio.h>

int main() {
    printf("Welcome!, You are here for an order?\n");
    printf("Press the number for whatever you want to access.\n");
    printf("Here is the menu, Sir.\n");
    printf("1.Pizza\n2.Desert\n3.Drinks\n");
    
    int x, pizza, size, q, price;
    scanf("%d", &x);

    if (x == 1) {
        printf("1.Cheese burst pizza\n");
        printf("2.Onion Pizza\n");
        printf("3.Capsicum Pizza\n");
        printf("4.Peri Peri Pizza\n");
        printf("5.Paneer Makhani Pizza\n");
        printf("Enter Here: ");
        scanf("%d", &pizza);

        if (pizza >= 1 && pizza <= 5) {
            printf("\nWhat size are you looking for?\n");
            printf("1.Small for 100rs\n2.Medium for 180rs\n3.Large for 250rs\n");
            printf("Enter here: ");
            scanf("%d", &size);
            printf("How many do you want: ");
            scanf("%d", &q);

            if (size == 1) {
                price = 100 * q;
                printf("You have ordered a Small ");
            } else if (size == 2) {
                price = 180 * q;
                printf("You have ordered a Medium ");
            } else if (size == 3) {
                price = 250 * q;
                printf("You have ordered a Large ");
            } else {
                printf("Invalid size selection\n");
                return 1;
            }

            switch (pizza) {
                case 1:
                    printf("Cheese burst Pizza.\n");
                    break;
                case 2:
                    printf("Onion Pizza.\n");
                    break;
                case 3:
                    printf("Capsicum Pizza.\n");
                    break;
                case 4:
                    printf("Peri Peri Pizza.\n");
                    break;
                case 5:
                    printf("Paneer Makhani Pizza.\n");
                    break;
                default:
                    printf("Invalid pizza selection\n");
                    return 1;
            }

            printf("Your total is %d rs\n", price);
        } else {
            printf("Invalid pizza selection\n");
            return 1;
        }
    } else if (x == 2) {
        // Dessert menu handling
        printf("Desert menu is not implemented yet.\n");
    } else if (x == 3) {
        // Drinks menu handling
        printf("Drinks menu is not implemented yet.\n");
    } else {
        printf("Invalid Input\n");
        return 1;
    }

    return 0;
}
