#include<stdio.h>

int main(void){

  int m,n, x;
  scanf("%d %d %d",&m,&n,&x);

  int arr[m][n];

  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      scanf("%d",&arr[i][j]);
    }
  }


  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      if(arr[i][j] == x){
        printf("true");
        return 0;
      }
    }
  }

  printf("false");

  return 0;

}
