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

  int index = -1;
  int gcount = 0;

  for(int i=0; i<m; i++){
    int count = 0;
    for(int j=0; j<n; j++){
      if(arr[i][j] == 1){
        count++;
      }
    }
    if(gcount<count){
      gcount = count;
      index = i;
    }

  }

  printf("%d",index);

  return 0;

}
