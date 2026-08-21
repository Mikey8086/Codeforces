#include<stdio.h>
#include<stdlib.h>

int main(void){

	int n;
	scanf("%d",&n);
	long long *p = (long long *)malloc(n*sizeof(long long));

	for(int i=0; i<n; i++){
		scanf("%lld",&p[i]);
	}

	for(int i=n-1; i>=0; i--){
		printf("%lld ",p[i]);
	}
}


