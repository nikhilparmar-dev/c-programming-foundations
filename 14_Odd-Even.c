// Write a Program To find given no. is odd or even.

#include<stdio.h>
#include<conio.h>
void main () {
    int n;
    printf("Enter The Number : ");
    scanf("%d", &n); 

    if (n % 2 == 0) {
        printf("Even Number");
    } else {
        printf("Odd Number");
    }
}