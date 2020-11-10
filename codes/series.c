#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int i=4, sum = 0;

int find_nth_term(int n, int a, int b, int c)
{
  //Write your code here.
  
  sum = a + b + c;
  switch (i%3)
  {
     case 1:
        a = sum;
        break;
     case 2:
        b = sum;
        break;
     default:
        c = sum;
        break;
  }
  if(i==n)
    return sum;
  else
  {
      i++;
      find_nth_term(n, a, b, c);          
  }
    
  
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
