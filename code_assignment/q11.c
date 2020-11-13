#include<stdio.h>
int main()
{
    int n;
    printf("enter the number for factors \n");
    scanf("%d", &n);

    for(int i = 1; i <= n/2 + 1; i++)
    {
        if (n%i == 0)
        {
            printf("%d \t", i);
        }
    }
}