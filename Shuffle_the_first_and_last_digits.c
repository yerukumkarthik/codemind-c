#include<stdio.h>
#include<math.h>
int main()
{
    int n,fi,no,di,la,mi,rev;
    scanf("%d",&n);
    no=log10(n);
    di=pow(10,no);
    fi=n/di;
    la=n%10;
    mi=n-(fi*di)-la;
    rev=(la*di)+mi+fi;
    printf("%d",rev);
}