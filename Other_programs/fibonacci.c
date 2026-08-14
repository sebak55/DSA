#include<stdio.h>
int fibonacci(int n,int a,int b){
    if(n==0)
    return 0;
    printf("%d ",a);
    return fibonacci(n-1,b,a+b);
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The fibonacci seris is:");
    fibonacci(n,0,1);
    return 0;
}
