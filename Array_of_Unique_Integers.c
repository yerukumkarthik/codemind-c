#include<stdio.h>
int main()
{
    int n,i,min,max;
    scanf("%d",&n);
    int salary[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&salary[i]);
        if(i==0)
        {
            min=salary[0];
            max=salary[0];
        }
        if(salary[i]>max)
        max=salary[i];
        if(salary[i]<min)
        min=salary[i];
    }
    printf("%d.00000",(min+max)/2);
}