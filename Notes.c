#include<stdio.h>

int main(void){

    int tk,temp,tk5,tk2;
    scanf(" %d",&tk);

    temp = tk%5;

    if(temp%2==0){

        tk5 = tk/5;
        tk2 = temp/2;
        printf("Number of 5 taka= %d\nNumber of 2 taka = %d\n",tk5,tk2);

    }
    else{

        tk5 = (tk/5)-1;
        tk2 = (temp+5)/2;
        printf("Number of 5 taka= %d\nNumber of 2 taka = %d\n",tk5,tk2);

    }

}