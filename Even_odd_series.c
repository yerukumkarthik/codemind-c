#include<stdio.h>
#include<math.h>
int main()
{
int a,b,i,s,k1=0,k2=1;
scanf("%d",&a);
//printf("0 ");
for(i=1;i<=a+1;i++)
{
   if(i%2==0)
{
   if(i==2)
   printf("0 ");
   else{
   s=pow(3,k1);
   printf("%d ",s);
   k1++;
   }
}
if(i%2==1)
{
   s=pow(2,k2);
   printf("%d ",s);
   k2++;
}
}
}