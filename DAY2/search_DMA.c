#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    printf("Enter the value of n:");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements:");
    for (int i = 0; i < n; i++)
    {
       
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    int search = 0;
    printf("Enter the element to be searched:");
    scanf("%d", &search);

    int i = 0, found = 0;
    while (i < n)
    {
        if (search == *ptr)
        {
            printf("The element %d exists at the index %d\n", search, i + 1);
            found = 1;
            break;
        }
        ptr++;
        i++;
    }

    if (!found)
    {
        printf("The element %d was not found in the array.\n", search);
    }

    free(arr);
}
