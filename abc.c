#include <stdio.h>

int main()
{
    int costPrice, sellingPrice, net;
    printf("Enter the cost price\n");
    scanf("%d", &costPrice);
    printf("Enter the selling price\n");
    scanf("%d", &sellingPrice);

    net= sellingPrice - costPrice;

    if(net>0)
    {
        printf("Youu have got a profit of %d taka\n", net);
    }
    if(net<0)
    {
        printf("You have got a loss of %d taka\n", net);
    }

    return 0;
}
