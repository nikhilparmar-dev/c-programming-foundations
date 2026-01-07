// Write a Program To perform Arithmetic Calculation (Addition, Subtraction, Multiplication & Division).

#include<stdio.h>
#include<conio.h>
void main () {
    int a,b;
    printf("Enter Number 1 : ");
    scanf("%d", &a);
    printf("Enter Number 2 : ");
    scanf("%d", &b);

    printf("\nAddition is = %d", a + b);
    printf("\nSubtraction is = %d", a - b);
    printf("\nMultiplication is = %d", a * b);
    printf("\nDivision is = %d", a / b);
}