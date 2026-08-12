#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "Hello World";
    char sub[100];
    char insert[100] = " Beautiful";
    char result[200];
    char old[100] = "World";
    char new[100] = "C Language";

    int i, j;
    int start, length, pos;

    /* 1. SUBSTRING */

    start = 6;
    length = 5;

    for(i = 0; i < length; i++)
    {
        sub[i] = str[start + i];
    }

    sub[i] = '\0';

    printf("Original String: %s\n", str);
    printf("Substring: %s\n\n", sub);


    /* 2. INSERT */

    pos = 5;

    i = 0;
    while(i < pos)
    {
        result[i] = str[i];
        i++;
    }

    j = 0;
    while(insert[j] != '\0')
    {
        result[i] = insert[j];
        i++;
        j++;
    }

    j = pos;
    while(str[j] != '\0')
    {
        result[i] = str[j];
        i++;
        j++;
    }

    result[i] = '\0';

    printf("After Insertion: %s\n\n", result);


    /* 3. DELETE */

    strcpy(result, "Hello Beautiful World");

    pos = 6;
    length = 10;

    i = pos;

    while(result[i + length] != '\0')
    {
        result[i] = result[i + length];
        i++;
    }

    result[i] = '\0';

    printf("After Deletion: %s\n\n", result);


    /* 4. REPLACE */

    strcpy(str, "Hello World");

    start = 6;

    i = 0;

    while(i < start)
    {
        result[i] = str[i];
        i++;
    }

    j = 0;

    while(new[j] != '\0')
    {
        result[i] = new[j];
        i++;
        j++;
    }

    j = start + strlen(old);

    while(str[j] != '\0')
    {
        result[i] = str[j];
        i++;
        j++;
    }

    result[i] = '\0';

    printf("After Replacement: %s\n", result);

    return 0;
}