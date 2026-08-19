#include<stdio.h>

int main(void){
   
  long long n,f;
  scanf("%lld %lld",&n,&f);
  
  if(f%n == 0){
      printf("Yes\n");
  }else{
      printf("No\n");
  }
    
    return 0;
}