#include<stdio.h>

int main(void){
    
    int marks;
    scanf("%d",&marks);
    
    if(marks>90){
        printf("Excellent\n");
    }else if(marks>80 && marks<=90){
        printf("Good\n");
    }else if(marks>70 && marks<= 80){
        printf("Fair\n");
    }else if(marks>60 && marks<=70){
        printf("Meets Expectations\n");
    }else{
        printf("Below Par\n");
    }
    
    
    
    return 0;
}