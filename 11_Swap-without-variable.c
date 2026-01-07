// Write a C program To interchange (swapping) two values without using third variable.

#include<stdio.h>
#include<conio.h>
void main () {
    int A = 10, B = 20;

    A = A + B;
    B = A - B;
    A = A - B;

    printf("A = %d\n", A);
    printf("B = %d\n", B);
}