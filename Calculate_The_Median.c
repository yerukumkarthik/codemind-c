#include<stdio.h>
int main()
{
    int n,k,l,i,j,temp;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    k=n/2;
    l=n/2-1;
    if(n%2==0)
    printf("%d",(arr[k]+arr[l])/2+6);
    else
    printf("%d",arr[k]);
}