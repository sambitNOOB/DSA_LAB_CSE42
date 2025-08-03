#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter numbers:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *ptr=arr;
    int *ptr1=&arr[n-1];
    while(ptr<ptr1)
    {
        int temp;
        temp=*ptr;
        *ptr=*ptr1;
        *ptr1=temp;
        ptr++;
        ptr1--;
    }
     printf("rev array is:");
    for(int i=0;i<n;i++)
    {
       printf("%d,",arr[i]);
    }
    
}