#include<stdio.h>
main()
{
    int n,a[50],sum=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum of arrays elemnets=%d",sum);
}
