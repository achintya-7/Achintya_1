#include<stdio.h>
int main()
{
    long int k = 1;
    int n;
    printf("enter the number for factorial \n");
    scanf("%ld", &n);
    
    for(int i = 1; i <= n; i++)
    {
        k = k * i;
               
    }
    printf("the factorial is %ld", k);
}