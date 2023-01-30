#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,n,c=0,s;
    scanf("%[^
]",str);
    //printf("%s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]>=48 && str[i]<=57){
        c++;
        s=1;
        }
    }
    if(s==1)
    printf("Contains %d digit",c);
    else
    printf("Doesn't contain digit");
}