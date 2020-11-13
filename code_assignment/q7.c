#include <stdio.h>
#include <math.h>
int main()
{
	int n, r, digits, rev=0;
	int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0, zero = 0;
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
		switch(r)
		{
		 	case 1:
			       	one++;
				break;
			case 2:
			       	two++;
				break;
			case 3:
				three++;
				break;
			case 4:
				four++;
				break;
			case 5:
				five++;
				break;
			case 6:
				six++;
				break;
			case 7:
				seven++;
				break;
			case 8:
				eight++;
				break;
			case 9:
				nine++;
				break;
			default:
			       	zero++;
		}
	}

		printf(" one = %d \n two = %d \n three = %d \n four = %d \n five = %d \n six = %d \n seven = %d \n eight = %d \n nine = %d \n zero = %d \n", one, two, three, four, five, six, seven, eight, nine, zero);
}
