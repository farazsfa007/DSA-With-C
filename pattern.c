#include<stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",5-j);
        }
        printf("\n");
    }
    return 0;
}