#include <stdio.h>

int main()
{
    char operation;
    double n1, n2;

    jump:
    printf("\nEnter an operator (+, -, *, /): ");
    scanf(" %c", &operation);  // Added space to handle newline
    printf("Enter two operands: ");
    scanf("%lf %lf", &n1, &n2);

    switch (operation)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", n1, n2, n1 + n2);
        break;

    case '-':
        printf("%.1lf - %.1lf = %.1lf", n1, n2, n1 - n2);
        break;

    case '*':
        printf("%.1lf * %.1lf = %.1lf", n1, n2, n1 * n2);
        break;

    case '/':
        if (n2 == 0)
            printf("Error! Division by zero.");
        else
            printf("%.1lf / %.1lf = %.1lf", n1, n2, n1 / n2);
        break;

    default:
        printf("Error! Operator is not correct,Try again.\n\n");
        goto jump;
    }

goto jump;
    return 0;
}
