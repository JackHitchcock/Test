#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float b;
    char operator;   
    
    printf("Please enter an operand : ");
    scanf("%c", &operator);
    
    printf("Please enter 2 numbers: ");
    scanf("%f %f", &a, &b);
    
    switch(operator)
    {
        case '+':
        printf("Total: %f ", a + b);
        break;
        
        case '-':
        printf("Total: %f ", a - b);
        break;
        
        case '*':
        printf("Total: %f ", a * b);
        break;
        
        case '/':
        printf("Total: %f ", a / b);
        break;
    
        default:
        printf("That's not a proper operand, try again!");
    }
    
    return 0;
    
}