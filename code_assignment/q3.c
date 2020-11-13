#include <stdio.h>
int main()
{
	int n, r, sum=0;
	printf("enetr number \n");
	scanf("%d", &n);
	while(n)
	{
		r = n%10;
		n = n/10;
		sum+=r;
	}
	printf("sum of digit is %d \n", sum);
}



	
