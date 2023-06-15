#include <stdio.h>
//in matrix addition both matrix size (mxn) must be equal and result matrix will be same size as others... 
// adding two matrix and saving the values in file with fprintf()
int main()
{
    FILE *fp;
    fp = fopen("sum_matrix2.txt", "w");
    if (fp == 0)
    {
        printf("Error file\n");
        return 0;
    }
    int m,n,i,j;
    printf("Enter the values of M and N\n");
    scanf(" %d %d", &m,&n);

    float A[m][n], B[m][n], C[m][n];

    printf("Enter the Matrix A\n");
    
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf(" %f", &A[i][j]);
            // fprintf(fp, "%.2f\t", A[i][j]);
        }
        //fprintf(fp, "\n");
    }//loop for A matrix input
    fwrite(&A, sizeof(A), m*n, fp);

    printf("Enter the Matrix B\n");

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf(" %f", &B[i][j]);
            //fprintf(fp, "%.2f\t", B[i][j]);
        }
        //fprintf(fp, "\n");
    }//loop for B matrix input
    fwrite(&B, sizeof(B), m*n, fp);

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            C[i][j]= A[i][j]+B[i][j];
        }
    }//loop for addition

    printf("The mattrix addition is \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%.2f\t", C[i][j]);
            //fprintf(fp, "%.2f\t", C[i][j]);
        }
        printf("\n");
        //fprintf(fp, "\n");
    }
    fwrite(&C, sizeof(C), m*n, fp);
    fclose(fp);

    return 0;
}