#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>b && a<c)
        printf("%d
",a);
        else if(b>a && b<c)
        printf("%d
",b);
        else if(c>b && c<a)
        printf("%d
",c);
        else if(a>c && a<b)
        printf("%d
",a);
        else if(b>c && b<a)
        printf("%d
",b);
        else if(c>a && c<b)
        printf("%d
",c);
    }
}