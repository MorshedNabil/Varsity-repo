#include <stdio.h>
//converting N light year intot km.
//1 light year= 3.0e8 mester/s
int main()
{
    double speed= 3.0e8;
    speed= speed/1000;
    speed= speed*60*60*24*365;
    int n;
    printf("Ener the value of light year\n");
    scanf("%d", &n);
    double distance;
    distance= n*speed;
    printf("%d light year %.3e km\n", n, distance);

    return 0;
}