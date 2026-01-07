// Write a C program to find out volume of cube. VOC=l*w*h

#include<stdio.h>
#include<conio.h>
void main () {
    int l,w,h;
    printf("Enter Length : ");
    scanf("%d", &l);
    printf("Enter Width : ");
    scanf("%d", &w);
    printf("Enter Hight : ");
    scanf("%d", &h);

    float VOC = l*w*h;

    printf("\nYour Volume of Cube is = %f", VOC);
}