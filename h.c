#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n1,n2;
    int n = 5;
    
    n1=--n;
    n2=n--;

    
    printf("%d %d %d",n1,n1,n2); 
    return 0;
}
