#include <stdio.h>
#include <string.h>

int main(void) {

  int n;
  scanf("%d", &n);

  getchar();

  char arr[n][21];

  for (int i = 0; i < n; i++) {
    scanf("%20s",arr[i]);
  }

  char target[21];
  scanf("%20s", target);

  for (int i = 0; i < n; i++) {
    if (strcmp(arr[i], target) == 0) {
      printf("YES");
      return 0;
    }
  }

  printf("NO");

  return 0;
}
