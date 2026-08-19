#include<stdio.h>

int main(void) {

    long long n, m;
    scanf("%lld %lld", & n, & m);

    long long addition = n + m;
    long long subtraction = n - m;
    long long multiplication = n * m;
    long long division = n / m;
    long long mod = n % m;

    printf("%lld + %lld = %lld\n", n, m, addition);
    printf("\n");
    
    printf("%lld - %lld = %lld\n", n, m, subtraction);
    printf("\n");

    printf("%lld * %lld = %lld\n", n, m, multiplication);
    printf("\n");

    printf("%lld / %lld = %lld\n", n, m, division);
    printf("\n");

    printf("%lld %% %lld = %lld\n", n, m, mod);
}