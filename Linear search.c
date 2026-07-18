#include<stdio.h>
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key)
        return i;
    }
    return -1;
}
int main()
{
    int arr[]={5,10,15,20,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=20;
    int result=linearsearch(arr,n,key);
    if(result!=-1)
    printf("%d found at index %d\n",key,result);

    else
    printf("%d is not found\n",key);

    return 0;
    

}