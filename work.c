#include <stdio.h>
#include <math.h>

int main()
{
    FILE *fp;
    fp = fopen("triangle.txt","w");
    if (fp == 0)
    {
        printf("File error!\n");
        return 0;
    }

    float x1, x2, x3, y1, y2, y3, s, area, a, b, c;

    printf("Enter the first co-ordinates\n");
    scanf(" %f %f", &x1, &y1);
    fprintf(fp, "1st co-ordinates (%.2f,%.2f)\n", x1,y1);

    printf("Enter the second co-ordinates\n");
    scanf(" %f %f", &x2, &y2);
    fprintf(fp, "2nd co-ordinates (%.2f,%.2f)\n", x2,y2);

    printf("Enter the third co-ordinates\n");
    scanf(" %f %f", &x3, &y3);
    fprintf(fp, "3rd co-ordinates (%.2f,%.2f)\n", x3,y3);
    
    a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    b = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    c = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));

    s = (a+b+c)/2.0;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area: %.2f", area);
    fprintf(fp, "Area: %.2f", area);
    
    fclose(fp);

    return 0;
}