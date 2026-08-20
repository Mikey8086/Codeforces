#include <stdio.h>

int main(void) {

  int n;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {

    //(n-1) spaces
    for (int j = 1; j <= n - i; j++) {
      printf(" ");
    }

    // i stars
    for (int j = 1; j <= i; j++) {
      if (i == 1 || i == n || j == 1 || j == i) {
        printf("* ");
      } else {
        printf("  ");
      }
    }

    printf("\n");
  }

  return 0;
}
