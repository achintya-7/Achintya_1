#include<stdio.h>
int main()
{
    int a;
    printf("enter numbers \n");
    scanf("%d", &a);

    if(a%2 == 0)
        printf("even \n");
    else if(a%2 == 1)
        printf("odd \n");
   
}
