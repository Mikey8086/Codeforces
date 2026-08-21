#include<stdio.h>

void check_prime(int i){
	if(i<=1){
		return;
	}
	int fact_count = 0;
	for(int j = 2; j< i; j++){
		if(i%j == 0){
			fact_count++;
		}
	}
	if(fact_count == 0){
		printf("%d ",i);
	}
}

void print_primes(int n){
	for(int i=2; i<=n; i++){
		check_prime(i);
	}
}

int main(void){
	int n;
	scanf("%d",&n);
	print_primes(n);
	return 0;
}
