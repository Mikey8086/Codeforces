#include<stdio.h>

#define int long long

signed main(void){
  int m,n;
    scanf("%lld %lld",&m,&n);

    int arr[m];
    for(int i=0; i<m; i++){
      scanf("%lld",&arr[i]);
    }

    int element_count = 0;

    for(int i=0; i<m; i++){
      if(arr[i] == n){
        element_count++;
      }
    }

    printf("%lld",element_count);
    return 0;
}
