#include<stdio.h>
int main()
{
    int n,i,sum=0,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<arr[i+1])
        sum+=(arr[i+1]-arr[i]);
    }
    printf("%d",sum);
}