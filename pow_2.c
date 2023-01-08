#include<stdio.h>
#include<math.h>
int main() {
    int sm=0; int i;
    
    for(i=1; i<=6; i+=2) {
        
        sm=sm+pow(i,2);
    
    }

    printf("%d",sm);
    
    return 0;
}