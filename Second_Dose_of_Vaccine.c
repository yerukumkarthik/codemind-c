#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>=b && a<=c)
        printf("Take second dose now
");
        else if(a<b)
        printf("Too Early
");
        else if(a>c)
        printf("Too Late
");
    }
}