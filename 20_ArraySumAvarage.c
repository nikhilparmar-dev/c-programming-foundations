#include<stdio.h>
void main () {
    int arr[5] = {1,1,1,1,10};
    int sum = 0;
    float length = 0;
    for(int i=1; i<=5; i++) {
        sum += arr[i-1];
        length++;
    }
    printf("SUM = %d\n", sum);
    printf("AVG = %f", sum/length);
}