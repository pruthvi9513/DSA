#include<stdio.h>
void fib (int n);
main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    fib(n);
}

void fib(int n)
{
    int i;
    int t1=0;
    int t2=1;
    int t3;
    for(i=0;i<=n;i++)
    {
        t3=t1+t2;
        printf("%d\n",t3);
        t1=t2;
        t2=t3;
    }
}
