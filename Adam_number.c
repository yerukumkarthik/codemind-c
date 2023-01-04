#include<stdio.h>
int main()
{
    int n,i,sq,b,s=0,k=0;
    scanf("%d",&n);
    sq=n*n;
    for(i=n;i>0;i=i/10)
    {
        b=i%10;
        s=s*10+b;
    }
    for(i=s*s;i>0;i=i/10)
    {
        b=i%10;
        k=k*10+b;
    }
    if(sq==k)
    printf("True");
    else
    printf("False");
}