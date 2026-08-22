#include<stdio.h>
#include <stdlib.h>

int main(void){
  int t;
  scanf("%d",&t);

  while(t--){

    int n;
    scanf("%d",&n);

    int* arr = (int *)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
      scanf("%d",&arr[i]);
    }

    for(int i=0; i+1<n; i=i+2){
      int temp = arr[i];
      arr[i] = arr[i+1];
      arr[i+1] = temp;
    }

    for(int i=0; i<n; i++){
      printf("%d ",arr[i]);
    }
    printf("\n");

    free(arr);
    arr = NULL;

  }
  return 0;
}
