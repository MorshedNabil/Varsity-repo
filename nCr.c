#include <stdio.h>
// calculating nCr getting the value of n and r  (using own function)
// saving it in a file with fwrite()
unsigned long long fact(int x);
unsigned long long npr(int n, int r);
int main()
{
    FILE *fp;
    fp = fopen("fact.txt","w");
    if (fp == 0)
    {
        printf("Error file!\n");
        return 0;
    }
    int n, r;
    unsigned long long answer;
    printf("Ente 2 integer numbers\n");
    scanf(" %d %d", &n, &r);
    
    fwrite(&n, sizeof(n), 1, fp);
    fwrite(&r, sizeof(r), 1, fp);

    answer= npr(n,r);
    printf("%llu\n", answer);
    
    fwrite(&answer, sizeof(answer), 1, fp);

    return 0;
}

unsigned long long fact(int x)
{
    if(x<0)
      return 0;

    if(x==0)
      return 1;
    unsigned long long product=1;
    
    for(int i=1; i<=x; i++)
    {
        product= product*i;
    }
    /*alter way
    product= fact(x-1)*x [recursive call]
    */
    return product;
}

unsigned long long npr(int n, int r)
{
    if(n<0 || r<0 || n<r)
    {
        printf("Invalid Data\n");
        return 0; /* kono kisu return hoile fuction more jay,
                     mane function er niche ar kono statement execute hoy na, function er 
                     kaj okhanei sesh hoye jay return keyword ta pay,
                     ekhaneo 0 return hole nicher statement gula execute hobe na.*/
    }
    unsigned long long result;
    result= fact(n)/ fact(n-r);
    return result;
}