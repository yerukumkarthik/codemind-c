#include<stdio.h>
int main()
{
    int n,sum=0,i;
    scanf("%d",&n);
    sum=n;
    for(i=1;i>0;i++)
    {
        printf("%d ",sum);
        if(sum==1)
        break;
        if(sum%2==0)
        sum=sum/2;
        else if(sum%2==1)
        sum=3*sum+1;
    }
}