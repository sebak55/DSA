#include<stdio.h>
#include<string.h>
int main()
{
    int n,m;
    int i,j;
    char string[]="AABBAABCDDBAABCDEAAB";
    char pattern[]="AAB";
    int found=0;

    n=strlen(string);
    m=strlen(pattern);
    
    for(i=0;i<=n-m;i++){
        j=0;
        while(j<m && string[i+j]==pattern[j]){
            j++;
        }
        if(j==m){
            printf("Pattern found at index %d\n",i);
            found=1;
        }
    }
    if(found==0){
        printf("Pattern not found\n");
    }
    return 0;
    
}
