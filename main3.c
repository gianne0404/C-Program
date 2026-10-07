#include <stdio.h>

int main(void)
{
    int num1, num2;
    char op;

    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("enter operator +, -, *, /:");
    scanf(" %c", &op);

    switch (op)
    {
        case '+':
            printf("Result = %d\n", num1 + num2);
            break;
    case '-':
            printf("Result = %d\n", num1 - num2);
            break;
    case '*':
            printf("Result = %d\n", num1 * num2);
            break;
    case '/':
            printf("Result = %d\n", num1 / num2);
            break;
    default:
            printf("Invalid operator\n");
            break;
    }
    
    return 0;
}


           
