#include <stdio.h>

int main()
{
    int arr[3][3] = {{0,1,2}, {2,1,0}, {0}};

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}