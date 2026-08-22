#include<stdio.h>

int main(void){

  char a[20], b[20], c[20], d[20];
  scanf("%19s %19s %19s %19s",a,b,c,d);

  int i=0;
  while(b[i] !='\0'){
    if(b[i] != d[i]){
      printf("NO");
      break;
    }
    i++;
  }

  if(b[i] == '\0' && d[i] == '\0'){
    printf("YES");
  }

  return 0;
}
