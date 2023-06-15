#include <stdio.h>

int main()
{
    int N, first_num, first_max, counter=0, z;

    printf("Enter Value of N: ");
    scanf("%d", &N);
    printf("Enter first number:");
    scanf("%d", &first_num);
    counter++;
    first_max=first_num;
    
    for(counter;counter<N;counter++)
    {
        printf("Enter nxt number: ");
        scanf("%d", &z);

        if(z>first_max)
        {
            first_max=z;
        }
    }
    printf("The Maximum Value is: %d\n",first_max);

    return 0;
}