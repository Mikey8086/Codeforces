#include <stdio.h>

int main(void) {

  char a[1000];
  char b[1000];

  scanf("%999s", a);
  scanf("%999s", b);

  int i = 0;
  while (a[i] != '\0' && b[i] != '\0') {
    if (a[i] > b[i]) {
      printf("B");
      return 0;
    } else if (a[i] < b[i]) {
      printf("A");
      return 0;
    } else {
      i++;
    }
  }

  if (a[i] == '\0' && b[i] == '\0') {
    printf("Equal");
  } else if (a[i] == '\0') {
    printf("A");
  } else {
    printf("B");
  }
  return 0;
}
