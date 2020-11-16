#include<stdio.h>
int main()
{
    int n;

    printf("enter number \n");
    scanf("%d", &n);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(i == 0 || i == n-1 || j == 0 || j==n-1)
            printf("1");
            else
            printf("0");
        }
        printf("\n");
        
    }
    
}