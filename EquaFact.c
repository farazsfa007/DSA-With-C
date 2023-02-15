#include <stdio.h>

int fact(int n)
{
    int fac=1;
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    return fac;
}

int main(int argc, char const *argv[])
{
    float x,y,z;
    printf("Enter x y and z : ");
    scanf("%d %d %d", &x,&y,&z);

    int result = (fact(x)*fact(y))/fact(z);
    printf("Result = %d",result);

    return 0;
}
