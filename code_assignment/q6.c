
#include <stdio.h>
#include <math.h>
int main()
{
	int n, r, digits, rev=0;
	printf("enetr number \n");
	scanf("%d", &n);
	digits = log10(n);
	printf("digits = %d\n", digits+1);
	while(n)
	{
		r = n%10;
		n = n/10;
		rev +=  r * pow(10, digits);//used in finding power of a number
		digits--;		    //with base as 10 and digits as
					    //exponent 
		
	}
	if(rev == n)
	printf("the number %d is a palindrome", num);	
	
	else
	printf("not a palindrome");	
}
