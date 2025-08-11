#include <stdio.h>
#include <stdlib.h>

int countNonZero(int *mat, int n) 
{
    int count = 0;
    for (int i = 0; i < n * n; i++) {
        if (mat[i] != 0) {
            count++;
        }
    }
    return count;
}

int sumAboveLeading(int *mat, int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            sum += mat[i * n + j];
        }
    }
    return sum;
}

void displayBelowMinor(int *mat, int n)
{
    printf("Elements below the minor diagonal: ");
    int first = 1;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (i + j > n - 1) 
            {
                if (first) 
                {
                    printf("%d", mat[i * n + j]);
                    first = 0;
                } 
                else 
                {
                    printf(", %d", mat[i * n + j]);
                }
            }
        }
    }
    printf("\n");
}

int productLeadingDiagonal(int *mat, int n) {
    int product = 1;
    for (int i = 0; i < n; i++) 
    {
        product *= mat[i * n + i];
    }
    return product;
}

int main()
 {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int *matrix = (int *)malloc(n * n * sizeof(int));

    printf("Enter the elements: ");
    for (int i = 0; i < n * n; i++) 
    {
        scanf("%d", &matrix[i]);
    }

    int nonZero = countNonZero(matrix, n);
    printf("Number of nonzero elements: %d\n", nonZero);

    int sumAbove = sumAboveLeading(matrix, n);
    printf("Sum of the elements above the leading diagonal: %d\n", sumAbove);

    displayBelowMinor(matrix, n);

    int productDiag = productLeadingDiagonal(matrix, n);
    printf("Product of the leading diagonal elements: %ld\n", productDiag);

    free(matrix);

    return 0;
}