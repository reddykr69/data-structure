#include <stdio.h>

int main() {
    int size, choice, position, element;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("1. Insertion\n");
    printf("2. Deletion\n");
    printf("3. Updation\n");
    printf("4. Traverse\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
do{
    switch (choice) {
        case 1:
            printf("Enter the position and element to insert: ");
            scanf("%d %d", &position, &element);

            if (position < 0 || position > size) {
                printf("Invalid position!\n");
            } else {
                for (int i = size - 1; i >= position; i--) {
                    arr[i + 1] = arr[i];
                }
                arr[position] = element;
                size++;

                printf("Array after insertion: ");
                for (int i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
            break;

        case 2:
        	
            printf("Enter the position to delete: ");
            scanf("%d", &position);

            if (position < 0 || position >= size) {
                printf("Invalid position!\n");
            } else {
                for (int i = position; i < size - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                size--;

                printf("Array after deletion: ");
                for (int i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
            break;

        case 3:
            printf("Enter the position and new element to update: ");
            scanf("%d %d", &position, &element);

            if (position < 0 || position >= size) {
                printf("Invalid position!\n");
            } else {n
                arr[position] = element;

                printf("Array after updation: ");
                for (int i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
            break;

        case 4:
            printf("Array elements: ");
            for (int i = 0; i < size; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
            

        default:
            printf("Invalid choice!\n");
            break;
    }}
    while(choice!=5);

    return 0;
}

