// Write a Program To convert the currency i.e. RS to Dollar and Dollar to RS.

#include<stdio.h>
#include<conio.h>
void main () {
    int choice;
    printf("=========================");
    printf("{} Select Your Choice : ");
    printf("=========================");
    printf("1. For RS to Dollar");
    printf("2. For Dollar to RS");
    scanf("%d", &choice);

    if (choice == 1) {
        float a, result;
        printf("Enter Amount in RS: ");
        scanf("%f", &a);
        result = a/85;
        printf("Amount in Dollar: %.2f\n", result);
    } else if (choice == 2) {
        float a, result;
        printf("Enter Amount in Dollar: ");
        scanf("%f", &a);
        result = a*85;
        printf("Amount in RS: %.2f\n", result);
    } else {
        printf("Invalid Choice!");
    }
}