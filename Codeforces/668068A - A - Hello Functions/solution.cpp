#include<stdio.h>


void print_hello(){
  printf("I am learning functions\n");
}

int main(void){

  int t;
  scanf("%d",&t);

  while(t--){
    print_hello();
  }


  return 0;
}
