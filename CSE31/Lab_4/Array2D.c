#include <stdio.h>
#include <stdlib.h>
void printArray(int**, int);
int main() {
    int i = 0, j = 0, n = 5;
    int **arr = (int**)malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++){
        arr[i] = (int*)malloc(n * sizeof(int*));
        for(int j = 0; j < n; j++){
           *(*(arr+i)+j) = 0;
        }
    }
    printArray(arr, n);
    for(i = 0; i < n; i++){
        for(j=0; j<n; j++){
            if(i==j){
               *(*(arr+i)+j)=0;
            }
        }
    }

    printArray(arr, n);
    return 0;
}
void printArray(int ** array, int size) {
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size; j++){
            printf("%d", *(*(array+i)+j));
        }
        print("\n");
    }
}
