#include <stdio.h>

int main(void) {

  int n;
  scanf("%d", &n);

  long long fact = 1;

  if (n == 0) {
    printf("%lld", fact);
    return 0;
  }

  for (int i = 1; i <= n; i++) {
    fact = fact * i;
  }

  printf("%lld", fact);

  return 0;
}
