#include<stdio.h>

void find_hcf(int a, int b){
	int smaller_num = a<b?a:b;
	for(int i = smaller_num; i>0; i--){
		if(a%i == 0 && b%i == 0){
			printf("%d",i);
			return;
		}
	}
}

int main(void){

	int a,b;
	scanf("%d %d",&a,&b);

	find_hcf(a,b);
	return 0;
}
