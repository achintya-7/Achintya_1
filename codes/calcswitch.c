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

    switch (operator) {
    case '+':
    	result=first+second;
        printf("%d + %d = %f \n", first, second, result);
        break;
    case '-':
    	result=first - second;
        printf("%d - %d = %f \n", first, second, result);
        break;
    case '*':
    	result = first * second;
        printf("%d * %d = %f \n", first, second, result);
        break;
    default:
        printf("Error! operator is not correct");
    }x

    return 0;
}
