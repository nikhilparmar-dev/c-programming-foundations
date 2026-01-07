#include<stdio.h>
#include<conio.h>
void main () {
    int no=121, remainder, reverse=0;
    int oldNo = no;
    clrscr();
    while(no>0) {
        remainder = no % 10;
        reverse = reverse * 10 + remainder;
        no /= 10;
    }

    if(oldNo == reverse) {
        printf("Palindrome Number ! %d", reverse);
    } else {
        printf("Not a Palindrome Number");
    }
    getch();
}