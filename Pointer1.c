#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age = 22;
    int *ptr = &age;
    int age1=*ptr;
    // printf("\n%d\n",age1);
    printf("%u",&age);
    return 0;
}
