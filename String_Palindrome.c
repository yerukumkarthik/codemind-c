#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    scanf("%s",str1);
    int n=strlen(str1),i,k;
    for(i=0;i<n;i++)
    {
        if(str1[i]!=str1[n-i-1])
        {
            k=1;
            break;
        }
    }
    if(k==1)
    printf("Not Palindrome");
    else
    printf("Palindrome");
}