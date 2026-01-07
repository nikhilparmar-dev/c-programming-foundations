#include<stdio.h>
#include<conio.h>
#include<string.h>
void main () {
	char string1[6] = "Nikhil";
	char string2[3] = " 18";
	
	strcat(string1, string2);
	puts(string1);
	getch();
}
