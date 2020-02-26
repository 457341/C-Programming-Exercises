#include<stdio.h>
#include<stdlib.h>
void HeapSort(int arr[],int size);
void BuildMaxHeap(int arr[],int size);
void MaxHeap(int arr[] ,int size,int i);
void HeapSort(int arr[],int size){
    BuildMaxHeap(arr,size);
    int i,temp;
    int HeapSize = size;
    for(i = (size-1);i>=1;i--){
        temp = arr[i];
        arr[i] = arr[0];
        arr[0] = temp;
        HeapSize--; 
        MaxHeap(arr,HeapSize,0);
       
    }
}
void MaxHeap(int arr[] ,int size,int i){
    int l,r,largest,temp;
    l = 2*i + 1;
    r = 2*i+2;
    int HeapSize = size;
    if(l<HeapSize && arr[l] > arr[i])
        largest = l;
    else
        largest = i;
    if(r<HeapSize && arr[r] > arr[largest])
        largest = r;
    if(i != largest){
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        MaxHeap(arr,size,largest);
    }

}
void BuildMaxHeap(int arr[],int size){
    int HeapSize = size;
    int i;
    for(i = (size -1)/2;i>=0;i--)
        MaxHeap(arr,size,i);
}

void main(){
    int arr[] = {23,8,1,0,77,9998,54,98,23,6};
     int size = sizeof(arr)/sizeof(arr[0]);
    int i;
    printf("Before Heap_Sort: ");
    for(i = 0; i < size; i++)
    {
        printf("%d, ",arr[i]);
    }
    HeapSort(arr,size);
    printf("\nAfter Heap_Sort: ");
      for(i = 0; i < size; i++)
    {
        printf("%d, ",arr[i]);
    }
}