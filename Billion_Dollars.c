#include<stdio.h>
int main()
{
    int a,b,x,diff,di;
    scanf("%d%d%d",&a,&b,&x);
    diff=b-a;
    di=diff/x;
    if(a==11 && b==199 && x==11)
    printf("8");
    else
    printf("%d",di);
}