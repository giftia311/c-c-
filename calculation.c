#include <stdio.h>
#include <string.h>

int main()
{

    double num1;
    char op;
    double num2;

    printf("Enter the number: ");
    scanf("%lf",&num1);
    printf("Enter the operation: ");
    scanf(" %c",&op);
    printf("Enter the number: ");
    scanf("%lf",&num2);
    
    if(op == '+'){
        printf("Answer is : %f",num1 + num2);
    }else if(op == '-'){
        printf("Answer is : %f",num1 - num2);
    }
    else if(op == '*'){
        printf("Answer is : %f",num1 * num2);
    }else if(op == '/'){
        printf("Answer is : %f",num1 / num2);
    }else{
        printf("'%c' is Invalid operation",op);
    }

    return 0;
} 