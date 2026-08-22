#include <stdio.h>

int main(void) {
  char ch;
  scanf("%c", &ch);

  if (ch >= 'a' && ch <= 'z') {
    printf("Lowercase\n");
  }

  else if (ch >= 'A' && ch <= 'Z') {
    printf("Uppercase\n");
  }

  else if (ch >= '0' && ch <= '9') {
    printf("Digit\n");
  }

  else{
    printf("Special\n");
  }

  return 0;
}
