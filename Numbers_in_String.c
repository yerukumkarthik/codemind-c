#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int n,i,sum=0,t;
    scanf("%[^
]",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            sum+=(str[i]-48);
        }
    }
    printf("%d",sum);
}