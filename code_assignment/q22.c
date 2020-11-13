#include<stdio.h>
int main()
{
    int a, s = 0, t;
    printf("enter number \n");
    scanf("%d", &t);
    
    for(a = 1; a < t; a++)
    {
     for(int i = 1; i <= a/2; i++)
       {
         if(a%i == 0)
         {
            s += i;
         }
       }
       
       if (s == a)
         printf("%d \n", a);     
       s = 0; 
    }
    
}
    