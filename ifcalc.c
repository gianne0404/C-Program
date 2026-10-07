#include <stdio.h>

int main(void)
{
    int num1, num2;
    char op;

    printf("enter two numbers :");
    scanf("%d %d", &num1, &num2);

    printf(" enter operator +, -, *, /:");
    scanf(" %c", &op);

    if (op == '+')
        printf("Result = %d\n", num1 + num2);
    else if (op == '-')
        printf("Result = %d\n", num1 - num2);
    else if (op == '*')
        printf("Result = %d\n", num1 * num2);
    else if (op == '/')
        printf("Result = %d\n", num1 / num2);
    else
        printf("Invalid operator\n");

    return 0;
} 

