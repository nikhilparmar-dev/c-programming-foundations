#include<stdio.h>
void main () {
    int no = 7, i, isPrime = 1;
    if(no <= 1) {
        isPrime = 0;
    } else {
        for(i=2; i<no; i++) {
            if(no%i == 0) {
                isPrime = 0;
            }
        }
    }

    if(isPrime == 1) {
        printf("Number is a prime Number!");
    } else {
        printf("Number is not a prime Number!");
    }
}