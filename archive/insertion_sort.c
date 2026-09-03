#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int arr[],int n){
  for(int i=0; i<=n-1; i++){
    int j = i;
    while(j>0 && arr[j-1]>arr[j]){
      int temp = arr[j];
      arr[j] = arr[j-1];
      arr[j-1] = temp;
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

  insertion_sort(arr, n);

  for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
  }

  free(arr);

  return 0;
}
