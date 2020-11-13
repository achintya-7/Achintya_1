#include<stdio.h>
#include<math.h>
int main()
{
    int n, m = 0;
    printf("enter the number to check prime \n");
    scanf("%d", &n);
   
    for (int i = 2; i < sqrt(n); i++)
    {
        if(n%i == 0)
        {
            m = 1;
            break;
        }   
    }
    if(m == 1)
    printf("%d is a composite number \n", n);
    else
    printf("%d is a prime number \n", n);
}
    
    