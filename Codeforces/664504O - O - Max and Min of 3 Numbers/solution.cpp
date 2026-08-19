#include<stdio.h>

int main(void) {

    int a, b, c;
    scanf("%d %d %d", & a, & b, & c);


    int min = a;
    int max = a;

    if (b < min) min = b;
    if (c < min) min = c;

    if (b > max) max = b;
    if (c > max) max = c;


    printf("Min = %d\n", min);

    printf("Max = %d\n", max);



    return 0;
}