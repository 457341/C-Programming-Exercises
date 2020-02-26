#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void insertionSort(int arr[],int n);
void printArray(int arr[],int n); 
int main(){

    int arr[] = {12,11,13,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    printArray(arr,n);
    int arr2[] = {8,7,6,5,4,3,2,1};
    n  =   sizeof(arr2)/sizeof(arr2[0]);
    printf("\n");
    insertionSort(arr2,n);
    printArray(arr2,n);
    return 0;

}
void insertionSort(int arr[],int n){
    int i,j,key;
    for(i = 1;i < n;i++){
        key = arr[i];
        j = i -1;
        while(j >= 0 && arr[j] > key){
            arr[j +1] = arr[j];
            j = j -1;
        }
    arr[j +1] = key;
    }
}
void printArray(int arr[],int n){
    for(int i = 0;i<n;i++ ){
        printf("%d,",arr[i]);
    }
    printf("\n");
}