#include <stdio.h>  
int main ()  
{  
    int i, j; /* Here, the i variable is used for the outer loop, and j is used for the inner loop. */    
    int num1, num2;       
    printf (" Enter the first number from to get the table: ");  
    scanf (" %d", &num1);  
    printf (" Enter the last number: ");  
    scanf (" %d", &num2);  
    // use for loop to iterate the value of 1 up to 10  
    for (i = num1; i <= num2; i++)  
    {  
        num1 = i; /* Here the value of i is incremented by 1 and assigned to num variable on completion of each table. */  
        // inner for loop  
        printf (" Table of %d => ", num1);  
        for (j = 1; j <=10; j++)  
        {  
            printf(" | %3d |", num1 * j);  
        }         
        printf (" \n");  
     }  
     return 0;   
       
}  