#include<stdio.h>

#define int long long

signed main(void){
  int m,n;
    scanf("%lld %lld",&m,&n);

    int arr[m];
    for(int i=0; i<m; i++){
      scanf("%lld",&arr[i]);
    }

    for(int i=0; i<m; i++){
      if(arr[i] == n){
        printf("YES");
        return 0;
      }
    }

    printf("NO");
    return 0;
}
