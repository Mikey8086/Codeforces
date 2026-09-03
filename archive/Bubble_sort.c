#include<stdio.h>
#include<stdlib.h>


void Bubble_sort(int arr[], int n){
  for(int i=n-1;i>=1;i--){
    int didswap = 0;
    for(int j=0; j<=i-1; j++){
      if(arr[j]>arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        didswap = 1;
      }
    }
    if(didswap == 0){
      break;
    }
  }
}


int main(void){
  int n;
  scanf("%d",&n);
  int* arr = malloc(n*sizeof(int));
  for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }
  Bubble_sort(arr, n);
  for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
  }
  free(arr);
  return 0;
}
