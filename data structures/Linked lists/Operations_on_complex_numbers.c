#include <stdio.h>

int main()
{
    typedef struct complex_numbers
    {
        float real;
        float imag;
    } complex;
    complex c1, c2, sum_c, sub_c, pro_c, div_c;
    printf("Enter the real part of the first complex number : ");
    scanf("%f", &c1.real);
    printf("Enter the imaginary part of the first complex number : i*");
    scanf("%f", &c1.imag);
    printf("Enter the real part of the second complex number : ");
    scanf("%f", &c2.real);
    printf("Enter the imaginary part of the second complex number : i*");
    scanf("%f", &c2.imag);
    printf("Numbers entered are: %.2f + i*%.2f & %.2f + i*%.2f\n", c1.real, c1.imag, c2.real, c2.imag);
    char operator;
    printf("Enter operator '+' or '-' or '*' or '/': ");
    scanf(" %c", &operator);
    switch (operator)
    {
    case '+':
        sum_c.real = c1.real + c2.real;
        sum_c.imag = c1.imag + c2.imag;
        printf("Sum of the numbers is: %.2f + i*%.2f", sum_c.real, sum_c.imag);
        break;
    case '-':
        sub_c.real = c1.real - c2.real;
        sub_c.imag = c1.imag + c2.imag;
        printf("Difference of the numbers is: %.2f + i*%.2f", sub_c.real, sub_c.imag);
        break;
    case '*':
        pro_c.real = c1.real * c2.real + (c1.imag * c2.imag) * (-1);
        pro_c.imag = c1.real * c2.imag + c1.imag * c2.real;
        printf("Product of the numbers is: %.2f + i*%.2f", pro_c.real, pro_c.imag);
        break;
    case '/':
        if ((c2.real && c2.imag) == 0)
        {
            printf("Error: Invalid denominator!");
            return 1;
        }
        div_c.real = (float)(c1.real * c2.real + (-1) * (c1.imag * (-c2.imag))) / (c2.real * c2.real + c2.imag * c2.imag);
        div_c.imag = (float)(c1.real * (-c2.imag) + c1.imag * c2.real) / (c2.real * c2.real + c2.imag * c2.imag);
        printf("Division of the numbers is: %.3f + i*%.3f", div_c.real, div_c.imag);
        break;
    default:
        printf("Error: Invalid operator!");
        break;
    }
    return 0;
}