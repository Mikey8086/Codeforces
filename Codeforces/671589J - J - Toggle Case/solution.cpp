#include<stdio.h>

int main(void){

	char str[100001];
	fgets(str,sizeof(str),stdin);

	int i=0;
	while(str[i] !='\0'){
		if(str[i] >= 'a' && str[i] <='z'){
			str[i] -= 32;
		}

		else if(str[i] >= 'A' && str[i] <='Z'){
			str[i] += 32;
		}
		i++;
	}

	printf("%s",str);

	return 0;
}
