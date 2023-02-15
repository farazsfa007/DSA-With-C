#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[100], n, i, gcd=1, small;
    int flag=1;
    printf("Enter Integer Length : ");
    scanf("%d",&n);
    printf("Enter Numbers : ",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    small=arr[0];
    for (i = 0; i < n; i++)
    {
        if(arr[i]<small) {
            small=arr[i];
        }
    }
    for ( i = 0; i < n; i++)
    {
        if(arr[i]%small!=0) {
            flag=0;
            break;
        }
    }
    if(flag==1)
    gcd=small;
    else{
       
        for ( i = small/2; i > 1; i--)
        {
            flag=1;
            if(small%i==0){
                for (int j = 0; j < n; j++)
                {
                    if(arr[j]%i!=0){
                        flag=0;
                        break;
                    }
                }
                if(flag==1){
                    gcd=i;
                    break;
                }
            }
        }
        
    }
    printf("GCD=%d",gcd);
    
    return 0;
}