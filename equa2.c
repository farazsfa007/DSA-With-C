#include<stdio.h>

int findEquation(int x, int y, int z){
    int a = (x*x+y+z*2)*(x+y*y+z)/(x+y+z);
    return a;
}
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter value for a:");
    scanf("%d",&a);
    printf("Enter value for b:");
    scanf("%d",&b);
    printf("Enter value for c:");
    scanf("%d",&c);
    printf("\nFinal value is following = ");
    printf("%d",findEquation(a,b,c));
    return 0;
}