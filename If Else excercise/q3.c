#include<stdio.h>
int main()
{
    int a;
    printf("enter numbers \n");
    scanf("%d", &a);

    if(a == 0)
        printf("zero");
    else if(a > 0)
        printf("positive");
    else
        printf("negative");
}
