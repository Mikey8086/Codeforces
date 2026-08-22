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

  int max = arr[0][0];

  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      if(arr[i][j]> max){
        max = arr[i][j];
      }
    }
  }

  printf("%d\n",max);


  return 0;

}
