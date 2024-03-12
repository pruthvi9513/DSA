#include<stdio.h>
void read(float m[],int n);
void display(float m[],int n);
int linear(float[],int,int key);
main()
{
    int n;
    float m[50];
    float s;
    int count;
    int key;
    printf("Enter the value of n=%d\n");
    printf("Enter the key word=%d\n");
    scanf("%d%d",&n,&key);
    read(m,n);
    display(m,n);
    count=linear(m,n,key);
    if (count>0)
    {
        printf("Key is found");

    }
    else
    {
        printf("key is not found");
    }

}
void read(float m[50],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%f",&m[i]);
    }

}
void display(float m[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%f\n",m[i]);
    }
}
int linear(float m[50],int n,int key)
{
    int i;
    int count=0;
    for (i=0;i<n;i++)
    {
        if (key==m[i])
        {
            count++;
        }
    }

    return count;
}
