#include<stdio.h>
int main()
{
    int n,a,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a<3)
        printf("LIGHT
");
        else if(a>=3 && a<7)
        printf("MODERATE
");
        else if(a>=7)
        printf("HEAVY
");
    }
}