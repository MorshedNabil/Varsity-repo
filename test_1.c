// C program for writing
// struct to file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// a struct to read and write
struct person
{
    int id;
    char fname[20];
    char lname[20];
};

int main ()
{
    FILE *outfile;

    // open file for writing
    outfile = fopen ("person.txt", "w");
    if (outfile == NULL)
    {
        printf("\nError opened file\n");
        return 0;
    }

    struct person input1 = {1, "rohan", "sharma"};
    struct person input2 = {2, "mahendra", "dhoni"};

    // write struct to file
    fwrite (&input1, sizeof(struct person), 1, outfile);
    fputs("\n", outfile);
    fwrite (&input2, sizeof(struct person), 1, outfile);
    fputs("\n", outfile);
    if(fwrite != 0)
        printf("contents to file written successfully !\n");
    else
        printf("error writing file !\n");

    // close file
    fclose (outfile);

    return 0;
}