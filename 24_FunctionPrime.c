#include<stdio.h>
#include<conio.h>
void isPrime (int no);
void main () {
	int no = 10;
	isPrime(no);
	getch();
}

void isPrime(int no) {
	int isPrime = 1, i;
	for(i=2; i<no; i++) {
		if(no % 2 == 0) {
			isPrime = 0;
		}
	}
	
	if(isPrime == 1) {
		printf("Prime Number");
	} else {
		printf("Not a prime number");
	}
}
