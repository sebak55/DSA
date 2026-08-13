#include <stdio.h>

int main()
{
    int a[] = {29, 10, 14, 37, 13, 5};
    int n = 6;
    int i, j, key;

    for(i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    printf("Sorted array: ");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}