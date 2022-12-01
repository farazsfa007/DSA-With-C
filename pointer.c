// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a=27;
//     int* ptr=&a;
//     printf("%p",&a);
//     return 0;
// }
#include <stdio.h>


int main()
{
    // printf("Learn about pointers\n");
    // int a=76;
    // int *ptra = &a;
    // int *ptr2 = NULL;
    // printf("The address of pointer to a is %p\n", &ptra);
    // printf("The address of a is %p\n", &a);
    // printf("The address of a is %p\n", ptra);
    // printf("The address of some garbage is %p\n", ptr2);
    // printf("The value of a is %d\n", *ptra);
    // printf("The value of a is %d\n", a);
    int a=100;
    int *ptr;
    ptr = &a;

    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",ptr);
    printf("%d\n",&ptr);
    printf("%d\n",*ptr);
    printf("%d\n",*(&a));

    return 0;
}