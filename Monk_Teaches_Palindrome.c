#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int n,i,t,s,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",str);
        n=strlen(str);
        s=0;
        for(j=0;j<n;j++)
        {
            if(str[(n-1)-j]!=str[j])
            {
                s=1;
                break;
            }
        }
        if(s==1)
        printf("NO
");
        else
        {
            if(n%2==0)
            printf("YES EVEN
");
            else
            printf("YES ODD
");
        }
    }
}