// Write a Program To convert the measurement i.e. Feet to Inch & Inch to Feet.

#include<stdio.h>
#include<conio.h>
void main () {
    int choice;
    printf("=========================");
    printf("{} Select Your Choice : ");
    printf("=========================");
    printf("1. Feet To Inch");
    printf("2. Inch To Feet");
    scanf("%d", &choice);

    if (choice == 1) {
        float a, result;
        printf("Enter Feet: ");
        scanf("%f", &a);
        result = a * 12;
        printf("Inch is : %.2f\n", result);
    } else if (choice == 2) {
        float a, result;
        printf("Enter Inch: ");
        scanf("%f", &a);
        result = a / 12;
        printf("Feet is : %.2f\n", result);
    } else {
        printf("Invalid Choice!");
    }
}
