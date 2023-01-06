#include<stdio.h>
int main()
{
    int n,k=0,i,s=0,b;
    scanf("%d",&n);
    printf("%d",n/1000);
    for(i=n;i>0;i=i/10)
    {
        b=i%10;
        k++;
        s=s*10+b;
        if(k>2)
        break;
    }
    printf("%d",s);
}