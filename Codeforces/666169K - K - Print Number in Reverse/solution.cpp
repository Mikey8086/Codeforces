#include <stdio.h>

int main(void) {

  char number[20];
  scanf("%19s", number);

  int i = 0;

  while(number[i] != '\0'){
    i++;
  }

  i--;

  while(i>=0){
    printf("%c",number[i]);
    i--;
  }

  return 0;
}
