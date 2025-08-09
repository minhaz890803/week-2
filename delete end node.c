#include<stdio.h>
int main(){

    int size;

    printf("\nEnter the size of the ARRAY: ");
    scanf("%d",&size);

    int arr[size],i;

    for(i=0;i<size;i++){

        printf("Enter number%d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nOriginal array is: ");
    for(i=0;i<size;i++){

        printf("%d ",arr[i]);
    }

    size--;
    printf("\nModified array is: ");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);


    }

    return 0;
}
