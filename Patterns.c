#include <stdio.h>

int main()
{   // for first pattern
    for (int i=1; i<=4; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //for second pattern
    for (int i=1; i<=3; i++)
    {
        for (int j=1; j<=4-i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    //for third pattern
    for (int i=1; i<=4; i++)
    {
        for (int g=1; g<=4-i; g++)
        {
            printf(" ");
        }
        for (int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //for fourth pattern
    for (int i=1; i<=3; i++)
    {
        for (int g=1; g<=3-i; g++)
        {
            printf(" ");
        }
       for (int j=1; j<=(2*i)-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}