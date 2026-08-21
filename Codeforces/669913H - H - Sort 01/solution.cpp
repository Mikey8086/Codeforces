#include <stdio.h>

int main(void) {
  int t;
  scanf("%d", &t);

  while (t--) {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }

    int zero_count = 0;

    for (int i = 0; i < n; i++) {
      if (arr[i] == 0) {
        zero_count++;
      }
    }

    for (int i = 0; i < zero_count; i++) {
      arr[i] = 0;
    }

    for (int i = zero_count; i < n; i++) {
      arr[i] = 1;
    }

    for (int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
    }
    printf("\n");
  }
  return 0;
}
