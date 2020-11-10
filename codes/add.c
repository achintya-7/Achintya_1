#include<stdio.h>
int main()
{
	int a = 3;
	int b;
	b = ++a + a++ + --a;
	printf("%d \n", b);
	return 0;
	
}
