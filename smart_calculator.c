#include <stdio.h>
#include <math.h>
int main() {
    char operator;
    double num1, num2, result;
    printf("Enter an operator (+, -, *, /, %, ^, r): ");
    scanf(" %c", &operator);
    if (operator == 'r') {
        printf("Enter one operand: ");
        scanf("%lf", &num1);
    } else {
        printf("Enter two operands: ");
        scanf("%lf %lf", &num1, &num2);
    }
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero.\n");
                return 1;
            }
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '%':
            if ((int)num2 != 0)
                result = (int)num1 % (int)num2;
            else {
                printf("Error! Division by zero.\n");
                return 1;
            }
            printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)result);
            break;

        case '^':
            result = pow(num1, num2);
            printf("%.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
            break;

        case 'r':
            if (num1 >= 0) {
                result = sqrt(num1);
                printf("sqrt(%.2lf) = %.2lf\n", num1, result);
            } else {
                printf("Error! Cannot calculate square root of a negative number.\n");
            }
            break;

        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}
