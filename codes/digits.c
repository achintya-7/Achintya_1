#include <stdio.h>
int main()
{
        int n, i=0;
        scanf("%d", &n);
        while(n)
        {       
               n = n/10;
               i++;
        }
        printf("%d", i);
       
}
