#include<stdio.h>
#include<conio.h>
void main () {
    int no=123, reminder, reverse = 0;
    clrscr();
    while(no>0) {
        reminder = no%10;
        reverse = reverse * 10 + reminder;
        no = no / 10;
    }
    printf("%d", reverse);
    getch();
}