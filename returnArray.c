#include<stdio.h>
#include<stdlib.h>
int maxHeap(int arr[]);
void main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++)
    {
        printf("%d, ",arr[i]);
    }
    maxHeap(arr);
    printf("\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d, ",arr[i]);
    }
}
int maxHeap(int arr[]){
    int Size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < Size; i++)
    {
        arr[i] = arr[i] +1;
    }
    return arr;
}