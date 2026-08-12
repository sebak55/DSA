#include<stdio.h>
int main(){
    char str1[100]="Hello";
    char str2[100]="World";
    int i,j;
    /*1.Find Length*/
    i=0;
    while(str1[i]!='\0'){
        i++;
    }
    printf("Length of the string one is %d\n",i);

    /*2.concatenate strings*/
    i=0;
    while(str1[i]!='\0'){
        i++;
    }
    j=0;
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    printf("Concatenated string is %s\n",str1);

    /*compare strings*/
    i=0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
            break;

        i++;
    }

    if (str1[i] == str2[i])
        printf("Strings are equal\n");
    else if (str1[i] < str2[i])
        printf("First string is smaller\n");
    else
        printf("First string is greater\n");

    return 0;
}

    
    
