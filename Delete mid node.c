#include<stdio.h>
int main(){

    int size;

    printf("\nEnter the size of the AARAY: ");
    scanf("%d",&size);

    int arr[size],i,mid;
    
    for(i=0;i<size;i++)
    {   printf("Enter number%d: ",i+1);
        scanf("%d",&arr[i]);

    }
    printf("\nOrigianl array is: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    if(size%2==0){
        mid=size/2;
        for(i=mid-1;i<size;i++){
            arr[i]=arr[i+1];
        }
        size--;
    printf("\nModified array is: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    }
    else
    {
        mid=(size+1)/2;

        for(i=mid-1;i<size;i++)
        {
            arr[i]=arr[i+1];
        } 
        size--;
        printf("\nModified array is: ");

        for(i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }
        size--;
    }
    
    return 0;
}
