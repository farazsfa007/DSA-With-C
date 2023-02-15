#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,sum=0,arr[100];
    float avg;
    printf("Enter A number : ");
    scanf("%d",&n);
    printf("\nEnter Random Integers : %d",n);
    for (int i = 0; i <= n-1; i++) {
    printf("\nEnter %d Integers : ",i);

        scanf("%d",&arr[i]);
    }
    for (int i = 0; i <= n-1; i++) {

        sum+=arr[i];
    }
    avg=sum/n;
    
    printf("Sum of random Integers : %d",sum);
    printf("\nAverage of random Integers : %.2f",avg);
    return 0;
}
