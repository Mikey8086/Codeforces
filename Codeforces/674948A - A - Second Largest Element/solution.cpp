#include<stdio.h>
#include<stdlib.h>

void second_largest_el(int arr[], int n){
    int largest = arr[0];
    int second_largest = -1;
    
    int i=1;
    while(i<n){
        int current = arr[i];
        if(current>largest){
            second_largest = largest;
            largest = current;
        }
        else if (current > second_largest && current < largest){
            second_largest = current;
        }
        i++;
    }
    
    printf("%d",second_largest);
}

int main(void){
    int n;
    scanf("%d",&n);
    
    int* arr = malloc(n*sizeof(int));
    
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    second_largest_el(arr,n);
    free(arr);
    return 0;
}