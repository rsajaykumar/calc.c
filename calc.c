# include <stdio.h>
#include <math.h>

int main() {
    char operator;
    int num1;
    int num2;
    int result;

    printf("Enter an operator(+, -, *, /): ");
    scanf("%c",&operator);

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", num2);

    switch(operator) {
        case '+':
            result = num1 +num2;
            printf("\n Result: %d", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\n Result: %d", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\n Result: %d",result);
            break;
        case '/':
            result = num1 / num2;
            printf("\n Result: %d",result);
            break;
        default: 
            printf("%c is not valid",operator);
            break;
    }
}
