#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int t;
  scanf("%d", &t);

  while (t--) {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
      int target = arr[i];
      for (int j = 0; j < n; j++) {
        if (arr[j] == target && i!=j) {
          ans = arr[i];
          break;
        }
      }
    }
    printf("%d\n", ans);
    free(arr);
    arr = NULL;
  }
  return 0;
}
