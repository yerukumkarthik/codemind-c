#include<stdio.h>
int main()
{
    int n;
    float ch,bill;
    scanf("%d",&n);
    if(n<=199)
    ch=1.20;
    else if(n>=200 && n<400)
    ch=1.50;
    else if(n>=400 && n<600)
    ch=1.80;
    else if(n>=600)
    ch=2.00;
    bill=ch*n;
    if(bill>400)
    bill=bill+(15*bill)/100;
    if(bill<400)
    bill=bill+100;
    printf("%.2f",bill);
}