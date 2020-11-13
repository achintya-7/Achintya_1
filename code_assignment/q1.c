#include<stdio.h>
#include<math.h>
int main()
{
    int a, k, b, r;
    printf("enter number \n");
    scanf("%d", &a);

    k = log10(a);

    r = a%10;
    b = a/pow(10, k);

    printf("sum of first and last number is = %d", r+b);
    
}