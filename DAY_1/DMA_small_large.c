#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=0;
    printf("enter number of elements:");
    scanf("%d",&n);
    int *ptr= (int *)malloc(n*sizeof(int));
    printf("Enter the numbers:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    int large = ptr[0], small = ptr[0];

    for (int i = 1; i < n; i++) {
        if (ptr[i] > large)
        {
            large = ptr[i];
        }

        if (ptr[i] < small)
        {
            small = ptr[i];
        }
    }
        printf("largest:%d\nsmallest:%d",large,small);
    free(ptr);
}