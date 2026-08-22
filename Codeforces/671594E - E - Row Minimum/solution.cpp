#include<stdio.h>

int main(void){

  int m,n;
  scanf("%d %d",&m,&n);

  int arr[m][n];

  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      scanf("%d",&arr[i][j]);
    }
  }

  for(int i=0; i<m; i++){
    int smallest = arr[i][0];
    for(int j=0; j<n; j++){
      if(arr[i][j] <smallest){
        smallest = arr[i][j];
      }
    }
    printf("%d ",smallest);
  }

  return 0;

}
