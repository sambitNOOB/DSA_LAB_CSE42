#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", arr + i);
    }
    
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    
    int count = 0;
    int *ptr = arr;
    for (int i = 0; i < n; i++) 
    {
        if (*ptr == a || *ptr == b) 
        {
            count++;
        }
        ptr++;
    }
    
    printf("Number of elements: %d\n", count);
    
    printf("The numbers are: ");
    ptr = arr;
    int first = 1;
    for (int i = 0; i < n; i++) {
        if (*ptr == a || *ptr == b) 
        {
            if (first) 
            {
                printf("%d", *ptr);
                first = 0;
            } 
            else 
            {
                printf(", %d", *ptr);
            }
        }
        ptr++;
    }
    
    free(arr);
}