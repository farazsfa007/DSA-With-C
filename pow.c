#include<stdio.h>
#include<math.h>
int main() {
    int sm=1; int i;
    
    for(i=2; i<=8; i+=3) {
        
        sm=sm+pow(i,2);
    
    }

    printf("%d",sm);
    
    return 0;
}