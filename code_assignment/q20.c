#include<stdio.h>
int main()
{
    int k, n, r, m = 0, sum = 0, nl;
    printf("enter the number \n");
    scanf("%d", &n);
  for (n = 0; n < nl; n++)
  {
      k = n;
     while (n)
    {
        r = n%10;
         n = n/10;
        m = r*r*r + m;    
    }

    if(k == m)
        sum += k;
  }
  printf("the sum is %d", sum);
  
    
}

    