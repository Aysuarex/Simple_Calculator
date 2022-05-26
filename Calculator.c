/**
 * @file Calculator.c
 * @author Suara Ayomide (aysuarex@gmail.com)
 * 
 * @brief - A program that performs basic arithmetic operations (+,-,*,/,%)  
 * 
 * @date 2022-05-26
 */

#include <stdio.h>
#include <windows.h>

void main ()
{
    int a,b;
    char operator;
    int add,sub,mul,mod,div;

    system("cls");
    
    Start:
    printf("\n\nSTART...\n Enter the first operand: \n");
    scanf("%d", &a);

    printf("Enter an operator(+,-,*,/,%%): \n");
    scanf("%s", &operator);

    printf("Enter the second operand: \n");
    scanf("%d", &b);

    switch (operator)
    {
    case '+' :
        add=a+b;
        printf("%d + %d = %d\n[The sum of %d and %d gives %d]\n",a,b,add, a,b,add);
        break;
    
    case '-' :
        sub=a-b;
        printf("%d - %d = %d\n[The subtraction of %d from %d gives %d]\n",b,a,sub, b,a,sub);
        break;
        
    case '*' :
        mul=a*b;
        printf("%d * %d = %d\n[The product of %d and %d gives %d]\n",a,b,mul, a,b,mul);
        break;

    case '/' :
        div=a/b;
        if(b != 0)
        {
            printf("%d / %d = %d\n[The Division of %d by %d gives %d]\n",a,b,div, a,b,div);
        }
        else
        {
            printf("ERROR! Second Operand cannot be zero!");
        }
        break;
        
    case '%' :
        mod= ( a % b);
        if( b != 0){
            printf("%d %% %d = %d\n[The modulus of %d and %d gives %d]\n",a,b,mod, a,b,mod);
        } else{
            printf("ERROR! Second Operand cannot be zero!");
        }
        break;

    default:
        printf("ERROR! Invalid Input! \n");
        break;
    }
    Sleep(1000);
    goto Start;
}