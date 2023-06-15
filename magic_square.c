#include <stdio.h>

int main()
{
    int n, i, j, tempi, tempj;
    scanf(" %d", &n);

    int square[20][20]={0}, num;
    // for initialize the first value '1' in 2D array's i*j position
    num = 1;
    i = 0;
    j = n/2;
    square[i][j] = num;
    //for initializing the values from 2 to n*n in the 2D array's cells
    for (num=2; num<=n*n; num++)
    {
        tempi = i-1;
        tempj = j+1;

        if (i == 0) 
          tempi = n-1;
        if (j == n-1)  
          tempj = 0;

        if (square[tempi][tempj] == 0)
        {
            i = tempi;
            j = tempj;
            square[i][j] = num;
        }
        else
        {
            tempi = i+1;
            tempj = j;
            i = tempi;
            j = tempj;
            square[i][j] = num;
        }
    }
    //for printing the magic square
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%d\t", square[i][j]);
        }
        printf("\n");
    }

    return 0;
}