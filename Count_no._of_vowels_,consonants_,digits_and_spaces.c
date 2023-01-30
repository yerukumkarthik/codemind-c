#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,n,c,v=0,d=0,w=0,k=0;
    scanf("%[^
]",str);
    //printf("%s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        c=str[i];
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c ==  'e' || c == 'i' || c == 'o' || c == 'u')
        v++;
        else if(c>=48 && c<=57)
        d++;
        else if(c==' ')
        w++;
        else
        k++;
    }
    printf("Vowels: %d
",v);
    printf("Consonants: %d
",k);
    printf("Digits: %d
",d);
    printf("White spaces: %d",w);
}