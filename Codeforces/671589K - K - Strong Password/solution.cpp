#include<stdio.h>

int main(void){

	char str[101];
	fgets(str,sizeof(str),stdin);

	int letters = 0;
	int lowercase = 0;
	int uppercase = 0;
	int digit = 0;
	int special_chars = 0;

	int i=0;
	while( str[i] != '\n' && str[i] != '\0'){
		if(str[i] >= 'a' && str[i] <= 'z'){
			lowercase++;
		}
		else if(str[i] >= 'A' && str[i] <= 'Z'){
			uppercase++;
		}
		else if(str[i] >= 48 && str[i] <= 57){
			digit++;
		}
		else{
			special_chars++;
		}

		letters++;
		i++;
	}

	if(letters == 10 && lowercase>=1 && uppercase>=1 && digit>=1 && special_chars>=1){
		printf("Strong\n");
	}else{
		printf("Weak");
	}

	return 0;
}
