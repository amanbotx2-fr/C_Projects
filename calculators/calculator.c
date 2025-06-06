// calculator
   
#include <stdio.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main()
{
    int choice;
    float num1, num2, result;

    while (1)
    {
        printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5)
        {
            printf("Exiting calculator\n");
            break;
        }

        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        switch (choice)
        {
        case 1:
            result = add(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if (num2 == 0)
            {
                printf("Error: Cannot divide by zero\n");
            }
            else
            {
                result = divide(num1, num2);
                printf("Result: %.2f\n", result);
            }
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

void display_menu()
{
    printf("=== Simple Calculator ===\n");
    printf("1. add\n");
    printf("2. subtract\n");
    printf("3. multiply\n");
    printf("4. divide\n");
    printf("5. exit\n");
}