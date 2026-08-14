#include <stdio.h>

int main()
{
    int a[] = {12, 11, 13, 5, 6, 7};
    int n = 6;
    int i, j, child, temp;

    /* Build Max Heap */
    for(i = n / 2 - 1; i >= 0; i--)
    {
        j = i;

        while(2 * j + 1 < n)
        {
            child = 2 * j + 1;

            if(child + 1 < n && a[child + 1] > a[child])
                child++;

            if(a[j] >= a[child])
                break;

            temp = a[j];
            a[j] = a[child];
            a[child] = temp;

            j = child;
        }
    }

    /* Heap Sort */
    for(i = n - 1; i > 0; i--)
    {
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;

        j = 0;

        while(2 * j + 1 < i)
        {
            child = 2 * j + 1;

            if(child + 1 < i && a[child + 1] > a[child])
                child++;

            if(a[j] >= a[child])
                break;

            temp = a[j];
            a[j] = a[child];
            a[child] = temp;

            j = child;
        }
    }

    printf("Sorted array: ");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
