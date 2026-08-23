#include<stdio.h>

int main(void){

	char str[1000001];
	fgets(str,sizeof(str),stdin);

	int i=0;
	int j=0;
	while(str[i] !='\0'){
		if(str[i]!= ' ' && str[i] != '\n' && str[i] != '\t'){
			str[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';

	printf("%s",str);

	return 0;
}
