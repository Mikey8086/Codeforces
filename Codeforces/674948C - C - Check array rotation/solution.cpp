#include <stdio.h>
#include <stdlib.h>

int swaps(int arr[], int n) {
  for(int i=0; i<n-1; i++){
    if(arr[i+1]<arr[i]){
      return i+1;
    }
  }

  return 0;
}

void solve() {
  int n;
  scanf("%d", &n);

  int *arr = malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int result = swaps(arr, n);
  printf("%d\n",result);
}

int main(void) {
  int t;
  scanf("%d", &t);

  while (t--) {
    solve();
  }
}
