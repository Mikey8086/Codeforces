#include<stdio.h>


void print_factors(int n){
  for(int i = 1; i<=n; i++){
    if(n%i == 0){
      printf("%d ",i);
    }
  }
}

int main(void){

  // int t;
  // scanf("%d",&t);
  //
  // while(t--){
  // }

  int n;
  scanf("%d",&n);
  print_factors(n);


  return 0;
}
