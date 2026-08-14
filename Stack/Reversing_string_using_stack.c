#include<stdio.h>
#include<string.h>
int main()
{
    char string[]="Orange";
    char stack[10];
    int top=-1;
    int i=0 ;
    while(string[i]!='\0'){
        top++;
        stack[top]=string[i];
        i++;

    }
    i=top;
    while(i!=-1){
        printf("%c",stack[i]);
        i--;
    }


}
