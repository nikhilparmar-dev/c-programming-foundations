// Write a Program To find maximum no from 3 nos.

#include<stdio.h>
#include<conio.h>
void main () {
    int n, n2, n3;
    printf("Enter The Number 1 : ");
    scanf("%d", &n); 
    printf("Enter The Number 2 : ");
    scanf("%d", &n2); 
    printf("Enter The Number 3 : ");
    scanf("%d", &n3); 


    if (n1 > n2 && n1 > n3) {
        printf("Greatest Number is %d", n1);
    } else if (n2 > n1 && n2 > n3) {
        printf("Greatest Number is %d", n2);
    } else {
        printf("Greatest Number is %d", n3);
    }
}