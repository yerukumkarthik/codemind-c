#include<stdio.h>
int main()
{
    int n,s=0,i,b;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        b=i%10;
        s=s*10+b;
    }
    if(s==n)
    printf("True");
    else
    printf("False");
}