// Evaluate follwing (using Fuction):
// R1= x*x+y+z, R2=x+y*y+z, K=R1*R2/R1+R2
#include <stdio.h>

int r1(int x, int y, int z){
    int a = x * x + y + z;
    return a;
}
int r2(int x, int y, int z){
    int a = x + y * y + z;
    return a;
}
int k(int x, int y, int z){
    int a = r1(x, y, z);
    int b = r2(x, y, z);
    int c = (a * b) / (a + b);
    return c;
}

int main(int argc, char const *argv[])
{
    int x, y, z;
    printf("Enter The values of X Y and Z:\n");
    scanf("%d %d %d", &x, &y, &z);
    printf("%d", k(x, y, z));
    
    return 0;
}