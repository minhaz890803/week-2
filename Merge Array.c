#include <stdio.h>

int main() {
    int size1, size2, f_size;
    int i; 

    printf("Enter the size of 1st ARRAY: ");
    scanf("%d", &size1);
    int arr1[size1];
    for (i = 0; i < size1; i++) {
        printf("Enter number%d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("\n1st array is: ");
    for (i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nEnter the size of 2nd ARRAY: ");
    scanf("%d", &size2);
    int arr2[size2];
    for (i = 0; i < size2; i++) {
        printf("Enter number%d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    printf("\n2nd array is: ");
    for (i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }

    f_size = size1 + size2;
    int f_array[f_size];

    for (i = 0; i < size1; i++) {
        f_array[i] = arr1[i];
    }

    for (i = 0; i < size2; i++) {
        f_array[i + size1] = arr2[i];
    }

    printf("\nMerged array is: ");
    for (i = 0; i < f_size; i++) {
        printf("%d ", f_array[i]);
    }

    return 0;
}

