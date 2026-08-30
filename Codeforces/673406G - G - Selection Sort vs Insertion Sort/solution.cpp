#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int insertion_sort(int arr[], int n) {
  int total_shifts = 0;
  for (int i = 0; i < n; i++) {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
      swap(&arr[j], &arr[j - 1]);
      j--;
      total_shifts++;
    }
  }

  return total_shifts;
}

int selection_sort(int arr[], int n) {
  int total_swap = 0;

  for (int i = 0; i < n; i++) {
    int smallest = i;

    for (int j = i + 1; j < n; j++) {
      if (arr[smallest] > arr[j]) {
        smallest = j;
      }
    }

    if (smallest != i) {
      swap(&arr[i], &arr[smallest]);
      total_swap++;
    }
  }

  return total_swap;
}

void sort() {

  int n;
  scanf("%d", &n);
  int *arr1 = malloc(n * sizeof(int));
  int *arr2 = malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr1[i]);
    arr2[i] = arr1[i];
  }

  int shifts = insertion_sort(arr1, n);
  int swaps = selection_sort(arr2, n);

  if (shifts > swaps) {
    printf("Selection Sort\n");
  } else if (shifts < swaps) {
    printf("Insertion Sort\n");
  } else {
    printf("Tie\n");
  }

  free(arr1);
  free(arr2);
}

int main(void) {
  int t;
  scanf("%d", &t);

  while (t--) {
    sort();
  }
}
