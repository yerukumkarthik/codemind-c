#include<stdio.h>
#include<string.h>
int main()
{
    char st[1000];
    scanf("%[^
]",st);
    for(int i=0;i<strlen(st);i++)
    {
        if(st[i]>=65 && st[i]<=90)
        {
            st[i]=st[i]+32;
        }
    }
    printf("%s",st);
}