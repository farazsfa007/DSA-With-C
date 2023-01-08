#include<stdio.h>
int main(int argc, char const *argv[])
{
    int min,max;
    printf("Enter the Min And max value : ");
    scanf("%d %d",&min,&max);
    for (int i = min; i <= max; i++)
    {
        
        for (int j = 1; j <= 10; j++)
        {
            printf("%d\t",i*j);
        }

        printf("\n");
        
    }
    
    return 0;
}
