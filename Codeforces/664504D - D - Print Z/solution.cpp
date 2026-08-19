#include<stdio.h>

int main(void){
    
    for(int i=0; i<5; i++){
        if(i == 0 || i == 4){
            for(int j = 0; j<5; j++){
                printf("*");
            }
            printf("\n");
        }
        else{
            for(int j = 0; j<5-i-1; j++ ){
                printf(" ");
            }
            printf("*\n");
        }
    }
    
    
    return 0;
}