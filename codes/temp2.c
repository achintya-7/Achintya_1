#include<stdio.h>
int main()
{
	float val, ans;
	char temp;
	scanf("%c", &temp);
	scanf("%f", &val);
	fflush(stdin);
	
	if(temp == 'F' || temp == 'f')
	 {
	 	ans=(val-32)*5/9;
	 	printf("%f \n", ans);
	 }
	 else if(temp == 'C' || temp == 'c')
	 {
	 	ans=(val*9/5) + 32;
	 	printf("%f \n", ans);
	 }
	 else
	 printf("wrong input\n");
	 
	 return 0;
}
