#include<stdio.h>
int main()
{
    int a, s = 0, t;
    printf("eneter number \n");
    scanf("%d", &a);
    t = a;
    for(int i = 1; i <= a/2; i++)
    {
        if(a%i == 0)
        {
            s += i;
        }
        
    } 
  if (s == t)
    {
        printf("it is a perfect number \n");
    }
  else   
    {
      printf("it is not a perfect number \n");
    }
}
    