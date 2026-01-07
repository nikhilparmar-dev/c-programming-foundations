// Write a Program To calculate Simple Interest.

#include<stdio.h>
#include<conio.h>
void main () {
    int p,r,n;
    printf("Enter Total Amount : ");
    scanf("%d", &p);
    printf("Enter Total Rate of Interest : ");
    scanf("%d", &r);
    printf("Enter Total Years : ");
    scanf("%d", &n);

    float SI = (p*r*n)/100;

    printf("\nSimple Interest is = %f", SI);
}