#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);

    if(year%400==0) // 400 diye year ta divisable hobe...
    {
        printf("It is leap year\n");
    }
    else if(year%4==0 && year%100!=0) // ...or 4 diye divisable hobe kintu 100 diye hobena 
    {
        printf("It is leap year\n");
    }
    else
    {
        printf("It is not a leap year\n");
    }

    return 0;
}
/*Leap year:
1. 4 diye year ta divisable hobe
2. abong 100 diye diisable hobe na
3. othoba 400 diye divisable hobe
*/