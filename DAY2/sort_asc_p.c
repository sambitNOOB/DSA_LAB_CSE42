#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    printf("Enter the numbers:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    int *ptr= arr;
    for(int i=0;i<n-1;i++)
    {
        int small_index=i;
        for(int j=i+1;j<n;j++)
        {
            if (*(ptr+j)<*(ptr+small_index))
            {
                small_index=j;
            }
        }
        int temp= *(ptr+i);
        *(ptr+i)=*(ptr+small_index);
        *(ptr+small_index)=temp;
    }
    printf("After sorting, the content of the array:");
    for(int i=0;i<n;i++)
    {
        printf("%d,",*(arr+i));
    }
    free(arr);
}
