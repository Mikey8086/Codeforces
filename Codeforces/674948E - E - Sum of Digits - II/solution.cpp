#include<stdio.h>

int main(void){

  char arr[100000];
  fgets(arr, sizeof arr, stdin);

  int sum = 0;
  int i = 0;
  while(arr[i] != '\n'){
    sum = sum + arr[i] - '0';
    i++;
  }

  printf("%d",sum);



  return 0;
}
