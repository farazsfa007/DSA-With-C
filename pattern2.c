// 5 
// 4 5 
// 3 4 5 
// 2 3 4 5 
// 1 2 3 4 5 

#include <stdio.h>


int main(int argc, char const *argv[])
{
    for (int i = 5; i > 0; i--)
    {
        for (int j = i; j <= 5; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}