#include<stdio.h>

int main(void){
    
    int n,m;
    
    scanf("%d %d",&n,&m);
    
    int lastD1 = n%10;
    int lastD2 = m%10;
    
    printf("%d\n",lastD1+lastD2);
    
    
    return 0;
}