#include<stdio.h>
int main()
{
    int n,b,max=0,i;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        b=i%10;
        if(b>max)
        max=b;
    }
    printf("%d",max);
}