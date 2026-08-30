#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(void) {

  size_t n;
  scanf("%zu", &n);

  int *arr = malloc(n * sizeof(int));

  for (size_t i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  for (size_t i = 0; i < n - 1; i++) {
    int swap_count = 0;
    for (size_t j = 0; j < n - 1 - i; j++) {
      if (arr[j + 1] < arr[j]) {
        swap(&arr[j], &arr[j + 1]);
        swap_count++;
      }
    }

    printf("Pass %zu: ", i+1);
    for (size_t k = 0; k < n; k++) {
      printf("%d ", arr[k]);
    }
    printf(", ");
    printf("swaps = %d", swap_count);
    printf("\n");
    if(swap_count == 0){
      return 0;
    }
  }

  return 0;
}
