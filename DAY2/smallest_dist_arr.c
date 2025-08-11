#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, x, y;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    int last_x = -1, last_y = -1;
    int min_dist = n; // max possible distance

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == x) {
            last_x = i;
            if (last_y != -1) 
            {
                int dist = abs(last_x - last_y);
                if (dist < min_dist) min_dist = dist;
            }
        }
        if (arr[i] == y) 
        {
            last_y = i;
            if (last_x != -1) 
            {
                int dist = abs(last_x - last_y);
                if (dist < min_dist) 
                {
                    min_dist = dist;
                }
            }
        }
    }

    printf("Minimum distance between %d and %d is %d\n", x, y, min_dist);

    free(arr);
}
