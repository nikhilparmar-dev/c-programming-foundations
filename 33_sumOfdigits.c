#include<stdio.h>
#include<conio.h>
void main () {
    clrscr();
    int no=123, sum=0, remainder;
    while(no>0) {
        remainder = no % 10;
        sum += remainder;
        no /= 10;
    }
    printf("%d", sum);
    getch();
}