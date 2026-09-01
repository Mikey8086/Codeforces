#include<stdio.h>
#include<stdlib.h>


void solve(){
  int n;
  scanf("%d",&n);

  int* arr = malloc(n*sizeof(int));


  int position = 0;
  for(int i=0; i<n; i++){
    int element;
    scanf("%d",&element);
    if(element!=0){
      arr[position] = element;
      position++;
    }

  }

  for(int j=position; j<n; j++){
    arr[j] = 0;
  }

  for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}


int main(void){
  int t;
  scanf("%d",&t);

  while(t--){
    solve();
  }
  return 0;
}
