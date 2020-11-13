#include<stdio.h>
int main()
{
    int n, m, temp1, temp2;
    printf("enter the 2 numbers for LCM \n");
    scanf("%d %d", &n, &m);
    temp1 = n;
    temp2 = m;
    while (n != m)
    {
        if(n>m)
            n-=m;
        else
            m-=n;
        
    }

    printf("LCM is %d \n", (temp1*temp2)/n);
}