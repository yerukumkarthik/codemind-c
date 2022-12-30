#include<stdio.h>
int main()
{
    int n,i,a=3,b=-2;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",a);
            a=(a*3)-4;
        }
        else
        {
            printf("%d ",b);
            b=(b*5)+12;
        }
    }
}