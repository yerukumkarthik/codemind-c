#include<stdio.h>
int main()
{
    int n,s=0,b,i;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        b=i%10;
        s=s*10+b;
    }
    printf("%d",s);
}