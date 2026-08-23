#include <stdio.h>

int main(void) {
    char str[1000001];
    fgets(str, sizeof(str), stdin);

    char ch;
    scanf(" %c", &ch);

    int i = 0, j = 0;

    while (str[i] != '\n' && str[i] != '\0') {
        if (str[i] != ch) {
            str[j] = str[i];
            j++;
        }
        i++;
    }

    str[j] = '\0';

    printf("%s", str);

    return 0;
}
