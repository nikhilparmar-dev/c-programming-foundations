// Write A Program to Show the use of Scanf function.

#include<stdio.h>
#include<conio.h>
void main () {
    char name[10];
    printf("Enter Your Name : ");
    scanf("%s", &name);
    printf("Your Name is %s", name);
}