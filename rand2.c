#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int key,i,j,k,m;
void PrintArray(int arr[],int n);
void InsertSort(int arr[],int n);
int main(){
    int arr[1000];
    srand(time(NULL));
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Array before inseration: ");
    for(i= 0;i<size;i++){
        arr[i] = rand() % 1000 + 1;
    }

    PrintArray(arr,size);
    InsertSort(arr,size);
    printf("\n");
    printf("Array after inseration: ");
    PrintArray(arr,size);
    return 0;
}
void PrintArray(int arr[],int size){
     for(i = 0;i<size;i++){
        printf("%d ,",arr[i]);
    }
}
void InsertSort(int arr[],int size){
     for( j = 1 ;j<size;j++){
        key = arr[j]; 
        i = j-1;
        while(i >= 0 &&  arr[i] > key){
            arr[i+1]= arr[i];
            i = i-1;
        }
        arr[i+1] = key;
    }
}
