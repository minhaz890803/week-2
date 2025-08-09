#include<stdio.h>
int main(){

    int arr[20],size,i,step;
    printf("How many elements you want to store(max=20): ");
    scanf("%d",&size);

    if(size>20 || size<=0){
        printf("Invalid size! Please enter a number between 1 and 20.\n");
        return 1;

    }

    for(i=0;i<size;i++){
        printf("Enter number%d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Array is:4");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
        
    }

    return 0;
}
