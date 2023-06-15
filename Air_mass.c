//Find the air mass from the given tyre vol(V), pressure(P), temp(T).
// PV=0.37*M*(460+T)
#include <stdio.h>

int main()
{
    float p,v,t,m;
    printf("Enter values of p,v,t\n");
    scanf("%f%f%f", &p,&v,&t);

    m=(p*v)/(0.37*(460+t));
    printf("The air mass is %f pound\n", m);

    return 0;
}