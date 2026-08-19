#include <stdio.h>

int main(void) {

  long long number;
  scanf("%lld", &number);
  long long original = number;

  long long reversed = 0;

  while (number != 0) {
    long long last_digit = number%10;
    reversed = (reversed * 10) + last_digit;
    number = number / 10;
  }

  if (original == reversed) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }

  return 0;
}
