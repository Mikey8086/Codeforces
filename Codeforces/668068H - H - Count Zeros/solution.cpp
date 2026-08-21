#include<stdio.h>

void count_zeros(long long n){
	long long zero_count = 0;
	if(n == 0){
		printf("%d",1);
		return;
	}
	while(n!= 0){
		if(n%10 == 0){
			zero_count++;
		}
		n = n/10;
	}
	printf("%lld",zero_count);
}


int main(void){

	long long n;
	scanf("%lld",&n);

	count_zeros(n);

	return 0;
}
