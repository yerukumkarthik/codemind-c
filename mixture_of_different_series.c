#include<stdio.h>
#include<math.h>
int main()
{
int a,b,i,s,k1=1,k2=0,n=1,m=2;
scanf("%d",&a);
printf("0 0 ");
for(i=0;i<a-1;i++)
{
   if(i%2==0)
{
   s=pow(2,k1);
   printf("%d ",n);
   n=n+s;
   k1++;
}
if(i%2==1)
{
   //s=pow(3,k2);
   printf("%d ",m);
   m=3*m+2;
   //k2++;
}
}
}