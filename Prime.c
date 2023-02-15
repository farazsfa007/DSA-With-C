#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = 5, y = 100, count_prime = 0, sum = 0;
    printf("this is Prime : ");
    for (int i = x; i <= y; i++) {
        int count = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) //i is fix and j is changing
            {
                count++;
            }
        }
        if (count <= 2) {
            sum=sum+i;
            count_prime++;
            
            printf("%d ", i);
        }
    }
    printf("\nCount of  prime number is : %d", count_prime);
    printf("\nSum of prime number is : %d", sum);

    return 0;
}