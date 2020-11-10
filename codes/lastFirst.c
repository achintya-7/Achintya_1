#include <stdio.h>
int main()
{
        int n, r, temp;
        int f, l;
        
        scanf("%d", &n);
        temp = n;
        while(n)
        {      
                
                r = n%10;
                n = n/10; 
                
        }
        
        
        f = r; 
        l = temp%10;
        
        printf("first number is %d and the last number is %d", f, l);
        
       
}
