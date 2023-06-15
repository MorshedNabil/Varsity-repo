#include <stdio.h>
#include <math.h>
int main()
{
    float x1,x2,x3,x4,sum,avg;
    printf("Enter the 4 flating numbers\n");
    scanf("%f%f%f%f", &x1, &x2, &x3, &x4);

    sum=x1+x2+x3+x4;
    avg= sum/4;

    float product= x1*x2*x3*x4;
    float gm= pow(product, 1.0/4);
   
    printf("arithmetic mean= %.3f\n", avg);
    printf("geometric mean= %.3f\n", gm);

    return 0;
}