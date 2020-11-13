#include<stdio.h>
int main()
{
    int n, m;
    printf("enter the 2 numbers for HCF \n");
    scanf("%d %d", &n, &m);
     
    while (n != m)
    {
        if(n>m)
            n-=m;
        else
            m-=n;
        
    }

    printf("HCF is %d \n", n);
}