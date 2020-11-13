#include<stdio.h>
int main()
{   
    int n, temp, f = 1, s = 0, temp;
    printf("enter the number \n");
    scanf("%d", &a);
    
    for(int i = 1; i <= a; i++)
    {
        temp = i;
        while (i)
        {
            r = i%10;
            for (int j = 1; j <= r; j++)
            {
                f = f * j;
            }
            s = s + f;
            i = i/10;            
        }
        if(s == temp)
            printf("%d \n", s)
        s = 0;
        f = 1;
   
    
    }
}

 

