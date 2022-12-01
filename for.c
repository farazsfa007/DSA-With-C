#include<stdio.h>
int main() {

    int M=0,i,j,k=1;

    for (i = 1; i <= 8; i+=3)
    {
        for ( j = 1; j <= i; j+=2) {
            
            k+=i*j;
        }

            M+=k;

    }
        printf("Ans = %d",M);
    
    return 0;

}