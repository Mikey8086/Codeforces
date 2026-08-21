#include<stdio.h>
#include<stdlib.h>

int main(void){

  int n;
  scanf("%d",&n);

  long long *arr = (long long *)(malloc(n* sizeof(long long)));

  for(int i = 0; i<n; i++){
    scanf("%lld",&arr[i]);
  }

  long long maximum = arr[0];
  int position = 0;

  for(int i = 0; i<n; i++){
    if(arr[i]>maximum){
      maximum = arr[i];
      position = i;
    }
  }

  printf("%lld %d",maximum,position+1);

  return 0;
}

