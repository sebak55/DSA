#include<stdio.h>
int main()
{
    int mid,key;
    int arr[5]={4,8,9,14,16};
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    int low=0;
    int high=5-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            printf("key is found at position %d.",mid+1);
            break;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }

    }
    if(low>high){
        printf("key is not found.");
    }
    
    
}
