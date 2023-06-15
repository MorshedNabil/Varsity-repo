#include <stdio.h>
#include <stdlib.h>
// getting input using structure and saving it in a txt file

struct student
{
    int roll;
    char name[100];
    char city[100];
}; // struct

int main()
{
    FILE *fp;
    fp = fopen("Student.txt", "w");
    if (fp == 0)
    {
        printf("File Error!");
        return 0;
    }
    int roll;
    char name[100], city[100];
    struct student s;

    printf("Enter student Roll, name and city.\n");
    scanf("%d %s %s", &s.roll, &s.name, &s.city); // using a var 's' we accessing the member of struct student
    
    printf("Your name is %s\n", s.name);
    printf("your roll is %d\n", s.roll);
    printf("Your city is %s\n", s.city);

    fwrite(&s, sizeof(struct student), 1, fp);
    fclose(fp);
    return 0;
}