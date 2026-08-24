#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

typedef int8_t i8;

int main(void){

	int n = 0;
	scanf("%d",&n);

	int* ptr = (int *)malloc(sizeof(int)*n);

	for(int i=0; i<n; i++){
		scanf("%d",(ptr + i));
	}

	int target = 0;
	i8 bool = 0;
	scanf("%d",&target);

	for(int i=0; i<n; i++){
		if(*(ptr+i) == target){
			bool = 1;
			break;
		}
	}

	if(bool){
		printf("YES");
	}else{

		printf("NO");
	}


	return 0;
}
