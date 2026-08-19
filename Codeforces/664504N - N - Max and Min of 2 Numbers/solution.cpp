#include<stdio.h>

int main(Void){
    
    long long a,b;
    scanf("%lld %lld",&a,&b);
    
    if(a>b){
        printf("Min = %lld\n",b);
        printf("Max = %lld\n",a);
    }else{
        printf("Min = %lld\n",a);
        printf("Max = %lld\n",b);
    }
    
    return 0;
}