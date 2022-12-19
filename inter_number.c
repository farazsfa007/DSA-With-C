#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a1,a2;
    float b1,b2;
    scanf("%d %d",&a1,&a2);
    scanf("%f %f",&b1,&b2);
    
    printf("sumation & subtract of two integers %d %d\n",a1+a2,a1-a2);
    printf("sumation & subtract of two float %.1f %.1f\n",b1+b2,b1-b2);
    
    
    return 0;
}