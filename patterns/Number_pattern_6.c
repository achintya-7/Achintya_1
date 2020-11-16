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
            if(i%2 == 0)
            {
                if(j%2 == 0)
                printf("1");
                else
                printf("0");
            }
            else
            {
                if(j%2 == 1)
                printf("1");
                else
                printf("0");
            }
            
        }  
        printf("\n");
        
    }
    
}