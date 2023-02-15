#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sum=0;
    for (int i = 0; i < 50; i++){
                i=i+1;
                sum=sum+i;
             printf("%d ",i);
        }
    printf("%d",sum);
    return 0;
}