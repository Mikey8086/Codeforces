#include<stdio.h>

int factorial(int n){
	int fact = 1;
	if(n == 0){
		return 1;
	}
	for(int i=1; i<=n; i++){
		fact = fact * i;
	}
	return fact;
}

int main(void){

	int n,r;
	scanf("%d %d",&n,&r);

	int result1 = (factorial(n));
	int result2 = factorial(r);
	int result3 = factorial(n-r);

	int final_result = result1/(result2*result3);

	printf("%d\n",final_result);


	return 0;
}

