#include<stdio.h>

int main(void){

	char str[1001];
	fgets(str,sizeof(str),stdin);

	int length = 0;
	while(str[length]!= '\n' && str[length] != '\0'){
		length++;
	}

	int start = 0;
	int end = length-1;

	while(start<=end){
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	

	printf("%s",str);

	return 0;

}
