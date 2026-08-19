#include <stdio.h>

int main(void) {
    long long n;
    scanf("%lld", &n);

    long long reverse = 0;

    while (n != 0) {
        long long last_digit = n % 10;
        reverse = reverse * 10 + last_digit;
        n = n / 10;
    }

    printf("%lld\n", reverse);

    return 0;
}