#include<stdio.h>
int main()
{
	char temp;
	double val;
	double ans;
	
	printf("press F for temp is in farenhiet and C for temp is in celcius \n");
	scanf("%c", &temp);
	printf("enter the value of temp \n");
	scanf("%f", &val);
	
	if(temp == 'F' || temp == 'f')
	 {
	 	ans=(val-32)*5/9;
	 	printf("%lf \n", &ans);
	 }
	 else if(temp == 'C' || temp == 'c')
	 {
	 	ans=(val*9/5) + 32;
	 	printf("%lf \n", &ans);
	 }
	 else
	 printf("wrong input\n");
	 
	 
	
}
