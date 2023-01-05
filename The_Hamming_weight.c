#include<stdio.h>
int main()
{
    char str[100];
    int i,c=0;
    scanf("%s",str);
    for(i=0;i<=' ';i++)
    {
        if(str[i]=='1')
        c++;
    }
    printf("%d",c);
}