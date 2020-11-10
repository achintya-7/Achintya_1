#include<stdio.h>
int main()
{
	int a;
	int b;
	int i = 1;
	printf("\n enter the number and the last number for tables \n");
	scanf("%d", &a);
	scanf("%d", &b);
	while(i<=b)
	{
		printf(" %d * %d = %d \n", a,i,a*i);
		++i;
	}
			
	return 0;
}
