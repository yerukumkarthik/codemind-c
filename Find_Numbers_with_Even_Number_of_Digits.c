#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,no,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        no=log10(arr[i])+1;
        if(no%2==0)
        count++;
    }
    printf("%d",count);
}