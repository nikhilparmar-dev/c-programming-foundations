#include<stdio.h>
void main () {
    int arr[5] = {5, 6, 7, 2, 3};
    int largest, smallest;
    largest = arr[0];
    smallest = arr[0];
    for(int i=1; i<=5; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);
}