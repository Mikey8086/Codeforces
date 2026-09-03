#include<stdio.h>

int main(void){

  char str[100000];
  fgets(str,sizeof str,stdin);

  int size = 0;
  int i = 0;
  while(str[i] != '\0' && str[i] != '\n'){
    size++;
    i++;
  }

  int ans = 0;
  for(int i=0; i<size; i++){
    int j = i;
    int count = 0;
    while(j<size && str[j] != ' '){
      count++;
      j++;
    }
    if(ans<count){
      ans = count;
    }
    i = j;
  }
  printf("%d\n",ans);
  return 0;

}
