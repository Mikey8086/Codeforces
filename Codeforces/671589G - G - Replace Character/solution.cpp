#include<stdio.h>

int main(void){

	char str[1000001];
	fgets(str,sizeof(str),stdin);

	char a, b;
	scanf(" %c %c",&a,&b);

	int i=0;
	while(str[i] !='\n' && str[i] != '\0'){
		if(str[i] == a){
			str[i] = b;
		}
		i++;
	}

	printf("%s",str);

	return 0;
}

