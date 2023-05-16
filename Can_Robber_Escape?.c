#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n],s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>=n)
        {
            printf("NO");
            s=1;
            break;
        }
    }
    if(s!=1)
    {
        printf("YES");
    }
}