#include <stdio.h>

int main(void) {

  int x, n;
  scanf("%d %d", &x, &n);
  long long result = 1;

  for (int i = 1; i <= n; i++) {
    result = result * x;
  }

  printf("%lld",result);

  return 0;
}
