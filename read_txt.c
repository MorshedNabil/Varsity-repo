#include <stdio.h>
//use of fscanf() fets() fgetc()
int main()
{
    FILE *file_pointer;
    char buf[300], c;

    file_pointer = fopen("my2.txt", "r");
    printf("----read a line----\n");
    fgets(buf, 500, file_pointer);
    printf("%s\n", buf);

    printf("----read and parse data----\n");
    file_pointer = fopen("my2.txt", "r"); // reset the pointer
    char str1[10], str2[20], str3[20], str4[30];
    fscanf(file_pointer, "%s %s %s %s", str1, str2, str3, str4);
    printf("Read String1 |%s|\n", str1);
    printf("Read String2 |%s|\n", str2);
    printf("Read String3 |%s|\n", str3);
    printf("Read String4 |%s|\n", str4);

    printf("----read the entire file----\n");

    file_pointer = fopen("my2.txt", "r"); // reset the pointer
    while ((c = getc(file_pointer)) != EOF)
        printf("%c", c);

    fclose(file_pointer); 
    return 0;
}