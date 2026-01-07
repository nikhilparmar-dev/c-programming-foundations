#include<stdio.h>
void main () {
    int no=12356, sum=0, remainder;
    while(no>0) {
        remainder = no % 10;
        no /= 10;
        sum++;
    }
    printf("%d", sum);
}