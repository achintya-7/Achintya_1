#include <stdio.h>
int main() 
{
    char operator;
    int first, second;
    float result;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%d %d", &first, &second);
    
    if(operator == '+')
    	{
    		result = first + second;
    		printf("%d + %d = %f \n", first, second, result);
    	}
    else if(operator == '-')
    	{
    		result = first - second;
    		printf("%d - %d = %f \n", first, second, result);
    	}
    else if(operator == '*')
    	{
		result = first * second;  
		printf("%d * %d = %f \n", first, second, result);
	}
    else 
    	printf("\n you entered wrong operator \n");  		
    
    return 0;
}

