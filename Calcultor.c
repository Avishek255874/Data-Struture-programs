// #include <stdio.h>
// void main()
// {
//     int num, num2 ;
//     char operator;

//     printf("Enter the first number: ");
//     scanf("%d", &num);
//     printf("Enter the second number: ");
//     scanf("%d", &num2);

//     printf("Enter the operator: ''+'' , ''-'' , ''*''/'': ");
//     scanf(" %c", &operator);

//     switch (operator)
//     {
//     case '+':
//       // result = num + num2;
//         printf("The result is: %d", num + num2);
//         break;
//     case '-':
//         printf("The result is: %d", num - num2);
//         break;
//     case '*':
//         printf("The result is: %d", num * num2);
//         break;
//     case '/':
//         printf("The result is: %d", num / num2);
//         break;
//     default:
//         printf("Invalid operator");
//         break;
//     }
// }

#include <stdio.h>

int main()
{
    int num, num2, result;
    char operator;

    printf("Enter two numbers and an operator (+, -, *, /): ");
    scanf("%d %d %c", &num, &num2, &operator);

    switch (operator)
    {
    case '+':
        result = num + num2;
        break;
    case '-':
        result = num - num2;
        break;
    case '*':
        result = num * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num / num2;
            break;
        }
        printf("Error! Division by zero is not allowed.\n");
        return 1;
    default:
        printf("Invalid operator\n");
        return 1;
    }

    printf("The result is: %d\n", result);

    return 0;
}
