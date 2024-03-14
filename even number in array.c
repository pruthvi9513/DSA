#include<stdio.h>
void main()
{
    int i, size;
    printf("C Program to print all even number in array \n");
    printf("First enter number of elements you want in array\n");
    scanf("%d", &amp;size);
    int arr[size];
    for(i = 0; i &lt; size; i++)
    {
        printf("Please give value for index %d : ",i);
        scanf("%d",&amp;arr[i]);
    }
    printf("Even number in array are\n");
    for (i = 0; i &lt; size; i++){
        if(arr[i]%2==0){
            printf("%d \t",arr[i]);
        }
    }
return 0;}
