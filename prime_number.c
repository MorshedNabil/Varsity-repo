#include <stdio.h>
#include <math.h>
//find prime numbers among M to N
int cheak(int x)
{
    if(x<=1)
     return 0; //not prime number

    if(x==2)
     return 1; //prime number

    int i;
    for(i=2; i<=sqrt(x); i++)
        if (x%i==0)
         return 0; //not prime number
    
    return 1;
}

int main()
{
    FILE *fp;
    fp = fopen("prime.txt","w");
    if (fp == 0)
    {
        printf("Error file!\n");
        return 0;
    }
    int M, N, x, counter, c;
    scanf("%d %d", &M, &N);
    counter=0;
    for(x=M; x<=N; x++)
    {
        c=cheak(x);
        if(c==1)
        {
            printf("%d\n", x);
            fwrite(&x, sizeof(x), 1, fp);
            counter++;
        }
    } //end of loop
    printf("total number is %d\n", counter); // printing the total prime numbers has been print above
    fwrite(&counter, sizeof(counter), 1, fp);
    fclose(fp);
    return 0;
}