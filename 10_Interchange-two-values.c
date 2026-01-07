// Write a C program To interchange (Swapping) two values with using third variable.

#include<stdio.h>
#include<conio.h>
void main () {
    int A = 10, B = 20, Temp;

    Temp = A;
    A = B;
    B = Temp;

    printf("A = %d\n", A);
    printf("B = %d\n", B);
}