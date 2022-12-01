#include<stdio.h>

int main() {

    int arr[]={13, 27, 46, 17, 28, 37};
    int ele=25;
    int n ,found=0;

    for(int i=0;i<6;i++) {

        if(arr[i]==ele) {

            printf("Element Found at Location %d",i);
            found=1;
            break;

        }
    }
            if(!found) {
            printf("Your Element Not found");
        }

    return 0;
    
}