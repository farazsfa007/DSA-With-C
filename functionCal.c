#include<stdio.h>
// #include<math.h>
void main()
{
    int f();
    int a=2,b=3,c=4,k;
    k=f(a)*f(b)/f(c);
    printf("Ans - %d",k);
}

int f(int x) {
    int f1;
    f1=pow(x,2)+2*x;
    return (f1);
}