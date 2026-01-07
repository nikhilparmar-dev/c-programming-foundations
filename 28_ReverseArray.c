#include<stdio.h>
void main () {
    int arr[5] = {5, 6, 7, 2, 3};
    int Yes = 0;
    int find = 65;
    printf("Reversed array: ");
    for(int i=5; i>0; i--) {
        printf("%d ", arr[i-1]);
    }
}