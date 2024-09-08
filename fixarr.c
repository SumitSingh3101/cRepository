#include <stdio.h>

void insert(int arr[], int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &temp);
        arr[i] = temp;
    }
}

void delete(int arr[], int *n) {
    int index;
    printf("Enter the index where you want to delete: ");
    scanf("%d", &index);
    if (index < 0 || index >= *n) {
        printf("Invalid index\n");
        return;
    }
    for (int i = index; i < (*n) - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    char choice;
    int n = 0;
    int arr[100]; // assuming maximum size

    do {
        printf("Create array (C) or Delete element (D) or Print (P) or Exit (E): ");
        scanf(" %c", &choice); // added a space before %c to consume the newline character

        if (choice == 'C') {
            printf("Enter the number of elements: ");
            scanf("%d", &n);
            insert(arr, n);
        } else if (choice == 'D') {
            delete(arr, &n);
        } else if (choice == 'P') {
            print(arr, n);
        } else if (choice != 'E') {
            printf("Invalid input\n");
        }
    } while (choice != 'E');

    return 0;
}
