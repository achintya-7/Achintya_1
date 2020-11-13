#include<stdio.h>
int main()
{   
    int a, r, c, f, s = 0;
    printf("enter the number \n");
    scanf("%d", &a);
    c = a;

    while (a)
    {
        
        f = 1;
        r = a%10;

        for(int i = 1; i <= r; i++)
        {
            f = f * i;
        }
        s = s + f;

        a = a/10;
        

    }
    if(s == c)
        printf("%d is a strong number", s);
    else
        printf("%d is not", s);
    
    

}