#include <stdio.h>
int main()
{
	int n, r;
	unsigned int prod=1; 
	printf("enetr number \n");
	scanf("%d", &n);
	while(n)
	{
		r = n%10;
		n = n/10;
		prod = prod*r;
	}
	printf("product of digit is %u \n", prod);
}



	
