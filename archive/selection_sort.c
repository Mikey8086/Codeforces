#include<stdio.h>
#include<stdlib.h>

void selection_sort(int arr[], int n){
  for(int i=0; i<n; i++){
    int didswap = 0;
    int smallest = i;
    for(int j=i; j<n; j++){
      if(arr[j]<arr[smallest]){
        smallest = j;
        didswap++;
      }
    }
    if(didswap == 0){
      break;
    }
    int temp = arr[i];
    arr[i] = arr[smallest];
    arr[smallest] = temp;
  }
}

int main(void){

  int n;
  scanf("%d",&n);

  int* arr = malloc(n*sizeof(int));

  selection_sort(arr,n);

  for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
  }

  free(arr);

  return 0;
}
