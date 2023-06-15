#include <stdio.h>
//use of fprintf() fputs() fputc()
int main()
{
    FILE *fp;
    char name[100], id[100], ch= 'a', str[]="date: 2/4/22";

    fp=fopen("my.txt", "w"); //fopen() is a fuction to create and open a file  
    if(fp==0)
    {
        printf("File error!");
        return 0;
    }
    
    printf("Enter your name and id respectively\n");
    gets(name);
    gets(id);
    printf("Your name is %s\nYour id is %s\n", name, id);

    fprintf(fp, "%s\n", name);
    fprintf(fp, "%s\n", id);
    fputc(ch, fp); //to put a single character in tx file. we can write both single ch or the variable name.
    fputc('b', fp);
    fprintf(fp, "\n"); //for printing new line in txt file
    fputs("Thanks for typing.\n", fp);//to put a string in txt file. we can write both string or the variable name.
    fputs(str, fp);

    fclose(fp);
    return 0;
}