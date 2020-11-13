#include<stdio.h>
#include<math.h>
int main()
{
    int a, k, b, r, x, pov, num;
    printf("enter number \n");
    scanf("%d", &a);

    k = log10(a);

    r = a%10;

    pov = pow (10, k);

    b = a/pov;

    x = (a%pov);
       
    num = r*pov + x + b - r;

    printf("the required number is = %d \n", num);
    
}