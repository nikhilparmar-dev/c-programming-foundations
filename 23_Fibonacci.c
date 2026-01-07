#include<stdio.h>
void main () {
    int n = 8, i, next, a=0, b=1;
    printf("F Sereise: %d %d ",a, b);
    for(i=1; i<=n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
}