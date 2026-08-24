#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    
    long long arr[n];
    for(int i = 0; i<n; i++){
        scanf("%lld",&arr[i]);
    }
    
    long long target;
    scanf("%lld",&target);
    
    
    long long start = 0;
    long long end = n-1;
    int flag = 0;
    while(start<=end){
        long long mid = (start+end)/2;
        if(arr[mid] == target){
            flag = 1;
            break;
        }
        else if(target<arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    if(flag == 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}