#include<stdio.h>
int main(){

    int size;

    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int arr[size],i;

    for(i=0;i<size;i++){
        printf("Enter number%d:",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Array is:");
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
        
    }

    int start,mid,end,cal_mid;

    printf("\nEnter a number to insert at 1st: ");
    scanf("%d",&start);

    printf("\nEnter a number to insert at mid: ");
    scanf("%d",&mid);

    printf("\nEnter a number to insert at end: ");
    scanf("%d",&end);


    if(size>=3){
        arr[0]=start;
        arr[size-1]=end;
        if(size%2==0){
            cal_mid=size/2;
            arr[cal_mid-1]=mid;

        }
        else{
            cal_mid=(size+1)/2;
            arr[cal_mid-1]=mid;

        }
    }
    else{
        printf("\nYou cannot delete start,mid & end element\n at the same time, because size!=3");
    }

    printf("Updated array is: ");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
        
    }

    return 0;
}
