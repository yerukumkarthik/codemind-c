#include<stdio.h>
int main()
{
    int n,s,i,k,l;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&k,&l);
    for(i=0;i<n;i++)
    {
        if(arr[i]<k || arr[i]>l)
        {
            printf("%d ",arr[i]);
            s=1;
        }
    }
    if(s!=1)
    printf("-1");
}