#include <stdio.h>

int main()
{
    int N, counter=0, first_num, second_num, first_max, second_max, z;
    printf("enter Value of N: ");
    scanf("%d", &N);
    printf("Enter 1st number: ");
    scanf("%d", &first_num);
    counter++;
    printf("Enter 2nd number: ");
    scanf("%d", &second_num);
    counter++;

    if (first_num>second_num)
    {
        first_max=first_num;
        second_max=second_num;
    }
    else
    {
        first_max=second_num;
        second_max=first_num;
    }

    while(counter<N)
    {
        printf("Read nxt number: ");
        scanf("%d", &z);
       
        if(z>first_max)
        {
            second_max=first_max;
            first_max=z;
        }
        else if(z>second_max)
        {
            second_max=z;
        }
         counter++;
    }
    printf("the second maximum value is: %d\n", second_max);

    return 0;
}   