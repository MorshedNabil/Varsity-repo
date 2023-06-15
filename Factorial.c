#include <stdio.h>
// calculating factorial of a random number (using own function)
unsigned long long fact(int x);

int main()
{
    int x;
    unsigned long long f;
    printf("Ente the integer Data\n");
    scanf("%d", &x);
    f= fact(x);
    printf("The factorial of %d is %llu.\n", x, f); 
    return 0;
}

unsigned long long fact(int x)
{
    unsigned long long product=1;
    
    for(int i=1; i<=x; i++)
    {
        product= product*i;
    }
    return product;
}