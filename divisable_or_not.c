#include <stdio.h>
// nested if else 
int main()
{
    int M,N,counter;
    printf("Enter the value of M and N\n");
    scanf("%d%d", &M, &N);

    for(int i=M;i<=N;i++)
    {
        if(i%3==0)
        {
            if(i%5==0)
            {
                if(i%45!=0)
                 printf("%d\n", i);
                 counter++;
            }
        } 
    }
    printf("total number is %d\n", counter);

    return 0;
}