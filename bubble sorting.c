#include<stdio.h>
void read(int a[],int n);
void display(int a[],int n);
void sort(int a[], int n);
main()
{
    int a[10];
    int n,k;
    printf("Enter the number of elements in arrays\n");
    scanf("%d%d",&n,&k);
    read(a,n);
    display(a,n);
    sort(a,n);


}
void read(int a[10],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[10],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}


void sort(int a[10],int n)
{
    int i;
    int j;
    int temp;
    int k;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        } printf("\n");
    }
    printf("The asecending order of array=\n");
{
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

}

