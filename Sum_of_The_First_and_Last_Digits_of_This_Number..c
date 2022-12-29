#include<stdio.h>
int main()
{
    int n,a,b,last,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        for(j=a;j>0;j=j/10)
        {
            b=j%10;
            if(j==a)
            last=b;
        }
        printf("%d
",last+b);
    }
}