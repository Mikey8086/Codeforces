
/* rotate the array d places */
#include<stdio.h>
#include<stdlib.h>

void solve(){
  int n;
  scanf("%d",&n);

  int* arr = malloc(n * sizeof(int));

  for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }

  getchar();

  int places;
  scanf("%d",&places);

  int* temp = malloc(places * sizeof(int));
  int i=0;
  while(i<places){
    temp[i] = arr[i];
    i++;
  }

  int j = places;
  int k = 0;
  while(j<n){
    arr[k] = arr[j];
    j++;
    k++;
  }

  int l =0;
  for(int i=n-places;i<n;i++){
    arr[i] = temp[l];
    l++;
  }

  for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
  }

  printf("\n");


}

int main(void){
  int t;
  scanf("%d",&t);
  while(t--){
    solve();
  }
}
