#include<stdio.h>
int main()
{
    int a,b,c,max,lar,temp;
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b)?a:b;
    if(max==a)
    temp=b;
    else
    temp=a;
    lar=(temp>c)?temp:c;
    printf("%d",max+lar);
}