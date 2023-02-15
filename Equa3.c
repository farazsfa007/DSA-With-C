// Q.26 Write a Program to evaluate nCr

#include <stdio.h>

float factorial(float n)
{
    float fact;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main(int argc, char const *argv[])
{
    float result = 1, n = 1.0, r = 2.0;

    result = factorial(n) / (factorial(r) * factorial(n - r));
    printf("%f", result);
    return 0;
}
