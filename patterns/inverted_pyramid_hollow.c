#include<stdio.h>
int main()
{
    int n;

    printf("enter number \n");
    scanf("%d", &n);

    n++;

    for(int i = 1; i <=  n; i++)
    {
        for(int k = 1; k <= i-1 ; k++)
            printf(" ");
        for(int j = 1; j <= 2*(n - i) - 1; j++)
        {
            if(i == 1 || j == 2*(n - i) - 1 || j == 1)
                printf("*");
            else
                printf(" ");
        }
            
        printf("\n");
        
    }
    
}