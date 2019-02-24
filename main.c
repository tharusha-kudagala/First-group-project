#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("------ calculator ------\n\nAddition \t\t[+]\nSubtraction \t\t[-]\nMultiplication \t\t[*]\nDivision \t\t[/]\nPower \t\t\t[^]\nSquare root \t\t[R] ");

    char operator;
    double num1,num2,result;

    printf("\n\nEnter the first number: ");
    scanf("%lf",&num1);

    printf("\nEnter the operator: ");
    scanf("%s",&operator);

    if(operator!='R')
    {printf("\nEnter the second number: ");
    scanf("%lf",&num2);}

    switch(operator)
    {
        case '+' :
        printf("\nResult : %.2f\n",(num1 + num2));
        break;

        case '-' :
        printf("\nResult : %.2f\n",(num1 - num2));
        break;

        case '*' :
        printf("\nResult : %.2f\n",(num1 * num2));
        break;

        case '/' :
        printf("\nResult : %.2f\n",(num1 / num2));
        break;

        case 'R' :
        printf("\nResult : %.3f\n",sqrt(num1));
        break;

        case '^' :
        printf("\nResult : %.2f\n",pow(num1,num2));
        break;

        default : printf("\nOption is not available :( \n");
    }
    return 0;
}
