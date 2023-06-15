#include <stdio.h>

int main()
{
    int m, n, p, i, j, k;
    
    printf("Enter the value of m, n, p respectively\n");
    scanf(" %d %d %d", &m, &n, &p);

    float A[m][n], B[n][p], C[m][p], sum;

    printf("Enter the values of A matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf(" %f", &A[i][j]);
        }
    } // matrix A

    printf("Enter the values of B matrix\n");
    for (j = 0; j < n; j++)
    {
        for (k = 0; k < p; k++)
        {
            scanf(" %f", &B[j][k]);
        }
    } // matrix B

    for (i = 0; i < m; i++)
    {
        for (k = 0; k < p; k++)
        {
            sum = 0;
            for (j = 0; j < n; j++)
            {
                sum = sum + A[i][j] * B[j][k];
            }
            C[i][k] = sum;
        }
    }

    printf("The Matrix C is: \n");
    for (i = 0; i < m; i++)
    {
        for (k = 0; k < p; k++)
        {
            printf(" %.2f\t", C[i][k]);
        }
        printf("\n");
    }

    return 0;
}