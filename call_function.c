#include <stdio.h>

int f1(int);
int f2(int *);

int main()
{
    int y=100, c;
    c = f1(y);
    
    printf("%d\n", y); // will print the previous value of y
    printf("%d\n", c); // will print the calculated value of y return from f1()

    c = f2(&y);

    printf("%d\n", y); // will print 101 beacuse the value is changed in the location of y variable
    printf("%d\n", c); // will print 101 beacuse the return value from f2() is 101 which is saving in c

    return 0;
}

int f1(int x)
{
    x=x+1;
    return x;
} // ekhane variable e thaka value ta send hoy ar ta niye kaj hoy return kora value ager variable er 
  // maan e kono change ane na, ei function ta jotobar call hobe totobar create korbe tar local variable
  // abar kaj sesh e shob vanish hoye jabe

int f2(int *a)
{
    *a = *a+1;
    return *a;
} // ekhane poiner variable diye normal variable er address e thaka value niye kaj hoy address niye na
  // ar return kora result o variable er address e save hoy tai value change hoye jay 