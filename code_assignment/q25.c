#include<stdio.h>
int main()
{
    int n, temp, a,b;
    printf("enter number \n");
    scanf("%d", &n);

    a = 0, b = 1;
    for(int i = 0; i < n; i++)
    {
        temp = a;
        a = b;
        b = a + temp;
        printf(" %d", a);
        
    }
}