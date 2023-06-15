#include <stdio.h>
#include <math.h>

int main()
{
    float h,w,bmi;
    printf("Enter your height in feet\n");
    scanf("%f", &h);
    h= h*0.3048;
    printf("enter your weight in KG\n");
    scanf("%f", &w);
    bmi= w/pow(h,2);
    printf("Your BMI is %.3f\n", bmi);

    if(bmi<18)
      printf("You are underweight\n");
    
    else if(bmi>=25)
      printf("You are overweight\n");
    
    else
      printf("You are healthy\n");

    return 0;
}