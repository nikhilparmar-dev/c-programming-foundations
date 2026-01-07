// Write a C program addition 2 numbers using scanf() function (by taking i/p from the user).

#include<stdio.h>
#include<conio.h>
void main () {
    int a,b;
    printf("Enter Number 1 : ");
    scanf("%d", &a);
    printf("Enter Number 2 : ");
    scanf("%d", &b);

    printf("Addition is = %d", a + b);
}