#include <stdio.h>

int main()
{
    double low = 0;
    double high = 10;
    double mid;
    double f;
    int i;

    for (i = 0; i < 50; i++)
    {
        mid = (low + high) / 2;

        f = 4 * mid + 4 - 20;

        if (f < 0)
        {
            low = mid;
        }
        else if (f > 0)
        {
            high = mid;
        }
        else
        {
            break;
        }
    }

    printf("Solution: x = %.6lf\n", mid);

    return 0;
}