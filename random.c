#include <stdio.h>
#include <math.h>
int main()
{
    int sum = 0, i, j, m = 1;
    for (i = 1; i <= 8; i += 3)
    {

        for (j = 1; j <= i; j += 2)
        {
            m += m * j;
        }
        sum += m;
    }
    printf("sum=%d ", sum);

    return 0;
}
