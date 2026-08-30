#include<stdio.h>
#include<stdlib.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){
    size_t n;
    scanf("%zu",&n);

    int* arr = malloc(n * sizeof(int));

    for(size_t i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(size_t i = 0; i<n-1; i++){
        size_t smallest_position = i;

        for(size_t j = i+1; j<n; j++){
            if(arr[j]<arr[smallest_position]){
                smallest_position = j;
            }
        }

       swap(&arr[i], &arr[smallest_position]);
        printf("Pass %zu: ",i+1);

        for(size_t k = 0; k<n; k++){
            printf("%d ",arr[k]);
        }

        printf(", ");
        printf("min_selected = %d",arr[i]);
        printf("\n");
    }

    free(arr);


    return 0;
}
