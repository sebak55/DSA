#include<stdio.h>
#include<string.h>
int main()
{
    int flag=0;
    char string[6]="AABBAA";
    for(int i = 0,j=6-1;i<6,j>=0;i++,j--){
        if(string[i]!=string[j]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("String is not palindrom");
    }
    else
    printf("String is palindrom");
    

}