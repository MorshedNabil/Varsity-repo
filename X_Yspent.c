#include <stdio.h>

int main()
{
    int a=100000;
    float b=0.01;
    
    printf("X will spend %d taka in 30 days\n", a*30 );
    
    for(int i=1; i<=30; i++)
    {
        b = (b*2);
    }
    printf("Y will spend %.2f taka in 30 days\n", b);

    return 0;
}