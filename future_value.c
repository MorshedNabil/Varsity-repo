#include <stdio.h>
#include <math.h>

double futurevalue(double p, double i, int n);

int main()
{
    double x,y;
    int z;

    printf("Enter the principle value, interest rate, number of year respectively\n");
    scanf("%lf %lf %d", &x,&y,&z);
    
    double fvalue= futurevalue(x,y,z);
    printf("Future value is %lf\n", fvalue);

    return 0;
}

double futurevalue( double p, double i, int n )
{
    double f= p * pow((1+i/100.0),n);
    return f;
}