// Write a Program To find area of Circle.

#include<stdio.h>
#include<conio.h>
void main () {
    int r;
    printf("Enter Radius : ");
    scanf("%d", &r);

    float aoc = 3.14 * r * r;

    printf("\nArea of Circle is = %f", aoc);
}