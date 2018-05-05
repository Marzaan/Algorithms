#include<stdio.h>
int main ()
{    int i,n,temp,arr[20];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    temp=arr[0];
    for(i=1;i<=n-1;i++){
        if(arr[i]<temp){
            temp=arr[i];
        }
    }
    printf("%d",temp);
    return 0;
}
