#include<stdio.h>

int main(void){

	char str[100001];
	fgets(str,sizeof(str),stdin);

	int word_count = 0;
	int i=0;
	while(str[i] !='\0'){
		if(str[i] == ' ' || str[i] == '\t' || str[i] =='\n'){
			word_count++;
		}
		i++;
	}
	printf("%d",word_count);
	return 0;
}
