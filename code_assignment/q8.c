
#include <stdio.h>
#include <math.h>
int main()
{
	int n, r, digits, rev, temp, t;
	printf("enetr number \n");
	scanf("%d", &n);
	digits = log10(n);
	temp = digits;
	printf("digits = %d\n", digits+1);
	for(int i = 0; i <= temp; i++)
	{	
		rev = pow(10, digits);
		r = n % rev;
		t = n / rev;
		n = r;
		digits--;
		switch(t)
		{
		 	case 1:
			       	printf("one \t");
				break;
			case 2:
			       	printf("two \t");
				break;
			case 3:
				printf("three \t");
				break;
			case 4:
				printf("four \t");
				break;
			case 5:
				printf("five \t");
				break;
			case 6:
				printf("six \t");
				break;
			case 7:
				printf("seven \t");
				break;
			case 8:
				printf("eight \t");
				break;
			case 9:
				printf("nine \t");
				break;
			default:
			       printf("zero \t");
			       break;
		}
		
	}
}
