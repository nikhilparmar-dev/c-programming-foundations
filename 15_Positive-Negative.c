// Write a Program To find given no is positive, negative or zero.

#include<stdio.h>
#include<conio.h>
void main () {
    int n;
    printf("Enter The Number : ");
    scanf("%d", &n); 

    if (n == 0) {
        printf("Number is Zero");
    } else if (n > 0) {
        printf("Positive Number");
    } else {
        printf("Negative Number");
    }
}