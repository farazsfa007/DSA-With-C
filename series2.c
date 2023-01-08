#include<stdio.h>
#include<conio.h>
 void main()
 {
    int sum=0,count=0;
    printf("The list of even numbers between 5 and 100 is = ");
        for(int i=5; i<=100; ++i)
        {
            if(i%2==0)
            {
            printf("%d\n", i);
            count++;
            sum+=i;
            }
        }    
printf("\n The sum of all even numbers in range is= %d",sum);
printf("\n The count of all even numbers in range is= %d",count);
getch();
 }
