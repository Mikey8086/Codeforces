#include<stdio.h>
#include<string.h>

int main(void){

	char str[1001];
	fgets(str,sizeof(str),stdin);

	char str2[1001];
	strcpy(str2,str);

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
	
	if(strcmp(str,str2) == 0){
		printf("YES");
	}else{
		printf("NO");
	}


	return 0;

}
