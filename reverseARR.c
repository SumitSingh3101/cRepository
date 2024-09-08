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
    } else {
        for (int i = index; i < (*n) - 1; i++) {
            arr[i] = arr[i + 1];
        }
        (*n)--;
    }
}

void dl(int arr[], int *n) {
    int element, index = -1;
    printf("Enter the element you want to delete: ");
    scanf("%d", &element);

    for (int i = 0; i < *n; i++) {
        if (element == arr[i]) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Element not found\n");
    } else {
        for (int i = index; i < (*n) - 1; i++) {
            arr[i] = arr[i + 1];
        }
        (*n)--;
    }
}

void reverse(int arr[], int n) {
    int ayy[n];
    for(int i = 0; i < n; i++) {
        ayy[i] = arr[n - 1 - i];
    }
    for(int i = 0; i < n; i++) {
        arr[i] = ayy[i];
    }
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
    int arr[100];

    do {
        printf("Create array (C), Delete by index (D), Delete by element (L), Reverse(R), Print (P), or Exit (E): ");
        scanf(" %c", &choice);

        if (choice == 'C') {
            printf("Enter the number of elements: ");
            scanf("%d", &n);
            insert(arr, n);
        } else if (choice == 'D') {
            delete(arr, &n);
        } else if (choice == 'P') {
            print(arr, n);
        } else if (choice == 'L') {
            dl(arr, &n);
        } else if (choice == 'R') {
            reverse(arr, n);
        } else if (choice != 'E') {
            printf("Invalid input\n");
        }
    } while (choice != 'E');

    return 0;
}
