#include<stdio.h>
#include<stdlib.h>

int main(void){

  int n;
  scanf("%d",&n);

  long long *arr = (long long *)(malloc(n* sizeof(long long)));

  for(int i = 0; i<n; i++){
    scanf("%lld",&arr[i]);
  }

  long long sum = 0;

  for(int i = 0; i<n; i++){
    sum = sum + arr[i];
  }

  printf("%lld",sum);

  return 0;
}

