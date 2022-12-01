#include<stdio.h>

int main()
{
    int p,n;
    float r, si;

    p=1000;
    n=4;
    r=2;    

    si = p*n*r/100;
    printf("%.7f\n",si);

    return 0;
}
