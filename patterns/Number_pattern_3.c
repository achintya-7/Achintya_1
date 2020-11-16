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
            if(j%2 == 0)
            printf("0");

            else
            printf("1");
        }
        printf("\n");
        
    }
    
}