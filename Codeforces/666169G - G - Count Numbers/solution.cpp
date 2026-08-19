#include <stdio.h>

int main(void) {

  int positive = 0;
  int negative = 0;
  int even = 0;
  int odd = 0;

  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int temp;
    scanf("%d", &temp);

    if (temp > 0) {
      positive++;
    } else {
      if (temp != 0) {
        negative++;
      }
    }

    if (temp % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }

  printf("%d\n", positive);
  printf("%d\n", negative);
  printf("%d\n", even);
  printf("%d\n", odd);

  return 0;
}
