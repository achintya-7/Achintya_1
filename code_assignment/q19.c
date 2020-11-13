#include<stdio.h>
int main()
{
    int k, n, r, m = 0;
    printf("enter the number \n");
    scanf("%d", &n);
    k = n;
    while (n)
    {
        r = n%10;
         n = n/10;
        m = r*r*r + m;
       

    }

    if(k == m)
        printf("%d is an armstrong number \n", m);
    else
        printf("not an armstrong number \n");
}

    