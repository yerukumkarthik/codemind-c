#include<stdio.h>
int main()
{
    int n,i,j,c=1,s,arr[100],k,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
               c++;
               for(k=j;k<n;k++)
               {
                   arr[k]=arr[k+1];
               }
               n--;
               j--;
            }
        }
        if(arr[i]==c)
        {
           count++;
        }
    }
    printf("%d",count);
}