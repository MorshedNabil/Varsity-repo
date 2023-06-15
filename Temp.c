#include <stdio.h>

int main()
{
    float cel;

    printf("Enter the value of celsius\n");
    scanf("%f", &cel);
    float f= cel*1.8+32;
    float k= cel+273.15;
    printf("%.3f\n", f);
    printf("%.3f\n", k);

    return 0;
}