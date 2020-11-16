#include<stdio.h>
int main()
{
    int n;

    printf("enter number \n");
    scanf("%d", &n);
    for(int i=1; i <= n; i++)
    {
        for(int j=1; j <= (n-i); j++ )
            printf(" ");

        for(int k = 1; k<= ((2*i)-1); k++)
            printf("*");
        printf("\n");
    }
    n++;
    for(int i = 1; i <=  n; i++)
    {
        for(int k = 1; k <= i-1 ; k++)
            printf(" ");
        for(int j = 1; j <= 2*(n - i) - 1; j++)
            printf("*");
        printf("\n");
        
    }
}