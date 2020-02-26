#include<stdio.h>
#include<stdlib.h>
int* maxHeap(int *arr,int size);
void main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++)
    {
        printf("%d, ",arr[i]);
    }
    int *new_arr = maxHeap(arr, size);
    printf("\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d, ",new_arr[i]);
    }
    free(new_arr);
}
int* maxHeap(int *arr,int size){
    int *new_arr = malloc(sizeof(int) * size);
    for(int i = 0; i < size; i++)
    {
        new_arr[i] = arr[i] + 1;
    }
    return new_arr;
}