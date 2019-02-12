#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    printf("--------------- [+ - * / ] calculator -----");

    char operator;
    double num1,num2,result;

    printf("\n\nenter the first number: ");
    scanf("%lf",&num1);

    printf("\nenter the operator: ");
    scanf("%s",&operator);

    printf("\nenter the second number: ");
    scanf("%lf",&num2);

    switch(operator)
    {
        case '+' :
        printf("\nresult : %.1f",(num1 + num2));
        break;

        case '-' :
        printf("\nresult : %.1f",(num1 - num2));
        break;

        case '*' :
        printf("\nresult : %.1f",(num1 * num2));
        break;

        case '/' :
        printf("\nresult : %.1f",(num1 / num2));
        break;


        default : printf("option is not available :(");
    }
    return 0;
}
