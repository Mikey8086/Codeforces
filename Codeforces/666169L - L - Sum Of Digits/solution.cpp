#include <stdio.h>

int main(void) {

  long long n;
  scanf("%lld",&n);

  long long sum = 0;

  while(n != 0){
    long long last_digit = n%10;
    n = n/10;
    sum = sum + last_digit;
  }

  printf("%lld",sum);

  return 0;
}
