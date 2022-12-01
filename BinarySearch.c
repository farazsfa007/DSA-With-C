#include<stdio.h>

int main() {
    
    // without taking input from user 
    // int arr[]={1,2,3,4,5,6,7,8,9,10};
    // int low=0;
    // int n=11,mid,found=0;
    // int high=n-1;
    // int key=67;

    int arr[100]={};
    int n,key;
    int high=n-1;
    int low=0;
    int mid,found=0;
    printf("Enter Number of Element \n");
    scanf("%d",&n);
    printf("Enter The %d Element\n",n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter The Element You want to Find\n");
    scanf("%d",&key);
    

    while (low<=high)
    {
        mid=(low+high)/2;
        if(key<arr[mid]) {
            high=mid-1;
        }

        else if (key>arr[mid]) {
            low=mid+1;
        }
        else if (key==arr[mid]) {
            printf("Element %d Found At Location\n%d",key,mid);
            found=1;
            break;
        }       
    }
            if (!found) {
            printf("Element %d not found in the array list\n",key);
        }
        
    return 0;
}