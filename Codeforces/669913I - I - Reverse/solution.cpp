#include<stdio.h>

int main(void){
  int n;
  scanf("%d",&n);

  long long arr[n];

  for(int i = 0; i<n; i++){
    scanf("%lld",&arr[i]);
  }

  //reverse the array
  long long start = 0;
  long long end = n-1;

  for(;start<end;){
    long long temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }

  for(int i = 0; i<n; i++){
    printf("%lld ",arr[i]);
  }

  return 0;

}
