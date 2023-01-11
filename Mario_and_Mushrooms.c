#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(((3*i)+1)/n==1 || n==1)
        {
            printf("HUGE");
            break;
        }
        else if(((3*i)+2)/n==1 || n==2)
        {
            printf("SMALL");
            break;
        }
        else if(((3*i)+3)/n==1 || n==3)
        {
            printf("NORMAL");
            break;
        }
    }
}