#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int n,c=0,i;
    scanf("%[^
]",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]==' ')
        c++;
    }
    printf("%d",c+1);
}