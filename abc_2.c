#include <stdio.h>

int main()
{
    int age;
    int big;
    char sex;
    printf("Enter your sex\ntype only M/F\n");
    scanf("%c", &sex);

    printf("Enter your age\n");
    scanf("%d", &age);

    if (sex== 'f')
    {
        if (age<60)
        {
            printf("Not eligible for senior citizen benefit\n");
        }
        else 
        {
            printf("Eligible for senior citizen benefit\n");
        }
    }
    if (sex== 'm')
    {
        if (age<65)
        {
            printf("Not eligible for senior citizen benefit\n");
        }
        else 
        {
            printf("Eligible for senior citizen benefit\n");
        }
    }

    return 0;
}