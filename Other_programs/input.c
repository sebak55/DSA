#include<stdio.h>
int sum(int arr[],int n){
    if(n<=0)
    return 0;
    return arr[n-1]+sum(arr,n-1);
}
int main()
{
    int n;
    printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result=sum(arr,n);
    printf("sum=%d",result);
    return 0;
}
