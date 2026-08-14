#include <stdio.h>

int main()
{
    int a[] = {38, 27, 43, 3, 9, 82};
    int temp[6];
    int n = 6;
    int size, left, mid, right;
    int i, j, k;

    for(size = 1; size < n; size = size * 2)
    {
        for(left = 0; left < n; left = left + 2 * size)
        {
            mid = left + size;
            right = left + 2 * size;

            if(mid > n)
                mid = n;

            if(right > n)
                right = n;

            i = left;
            j = mid;
            k = left;

            while(i < mid && j < right)
            {
                if(a[i] <= a[j])
                    temp[k++] = a[i++];
                else
                    temp[k++] = a[j++];
            }

            while(i < mid)
                temp[k++] = a[i++];

            while(j < right)
                temp[k++] = a[j++];

            for(i = left; i < right; i++)
                a[i] = temp[i];
        }
    }

    printf("Sorted array: ");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
