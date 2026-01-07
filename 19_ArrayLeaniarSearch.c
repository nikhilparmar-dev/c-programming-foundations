#include<stdio.h>
void main () {
    int arr[5] = {5, 6, 7, 2, 3};
    int Yes = 0;
    int find = 65;
    for(int i=1; i<5; i++) {
        if(arr[i-1] == find) {
            Yes = 1;
            break;
        }
    }
    if(Yes == 1) {
    printf("Available in array");
    } else {
    printf("Not available in array");
    }
}