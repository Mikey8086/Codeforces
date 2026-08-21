#include<stdio.h>

void check_prime(int n){
	int factor_count = 0;

	if(n<=1){
		printf("Not Prime");
		return;
	}

	for(int i=2; i<n; i++){
		if(n%i == 0){
			factor_count++;
		}
	}
	if(factor_count > 0){
		printf("Not Prime");
	}
	else{
		printf("Prime");
	}
}


int main(void){

	int n;
	scanf("%d",&n);
	check_prime(n);

	return 0;
}
