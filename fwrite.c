#include <stdio.h>
// two ways of writing in file using C
int main()
{
    FILE *fp1, *fp2;
    fp1 = fopen("mydata.txt", "w");    
    fp2 = fopen("data.txt", "w");

    if (fp1 == 0 || fp2 == 0)
    {
        printf("File error\n");
        return 0;
    }

    int x= 20, y= 30, z= 150, d;
    float a= 20.5, b= 27.8, c= 300.00;

    fprintf(fp1, "%d %d %d %f %f %f\n", x, y, z, a, b, c);

    fwrite(&a, sizeof(a), 1, fp2);
    fwrite(&b, sizeof(b), 1, fp2);
    fwrite(&c, sizeof(c), 1, fp2);
    fwrite(&x, sizeof(x), 1, fp2);
    fwrite(&y, sizeof(y), 1, fp2);
    fwrite(&z, sizeof(z), 1, fp2); 

    printf("Data written successfully\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
}