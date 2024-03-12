#include<stdio.h>
int sum(int n);
main()
{
    int n,s;
    int fac_t;
    printf("Enter a number");
    scanf("%d",&n);
    s=sum(n);
    printf("%d",fac_t);
}
int sum(int n)
{
    int i,fac_t=1,sum=0;
    for(i=1;i<=n;i++)
    {
        fac_t=fac_t*i;

    }
    return sum;
}
