#include<stdio.h>
int main()
{
    int base, pow;
    long int num = 1;
    printf("enter the number and its power \n");
    scanf("%d %d", &base, &pow);

    for(int i = 0; i < pow; i++)
        num*=base;

    printf("%ld \n", num);
}
