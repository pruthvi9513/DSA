#include<stdio.h>
float simple_intrest(float t, float r, float p);
main()
{
    float t;
    float r;
    float p;
    float sum;
    printf("Enter value of P T R\n");
    scanf("%f%f%f",&t,&r,&p);
    sum=simple_intrest(t,r,p);
    printf("%f",sum);
    return 0;
}float simple_intrest(float t,float r,float p)
{
    float sum;
    sum=(p*r*t)/100;
    return sum;
}
