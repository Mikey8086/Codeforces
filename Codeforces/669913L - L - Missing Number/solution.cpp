#include<stdio.h>
#include<stdlib.h>

int main(void){

  int t;
  scanf("%d",&t);

  while(t--){
    int n;
    int ans = 0;
    scanf("%d",&n);

    int* arr = (int *)(malloc(n * sizeof(int)));

    for(int i=0; i<n; i++){
      scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++){
      int count = 0;
      int target = arr[i];

      for(int j=0; j<n; j++){
        if(arr[j] == target){
          count++;
        }
      }

      if(count == 1){
        ans = arr[i];
        break;
      }
    }
    printf("%d\n",ans);
    free(arr);
    arr = NULL;
  }

  return 0;

}
