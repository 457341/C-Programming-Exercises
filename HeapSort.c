#include<stdio.h>
#include<stdlib.h>
void BuildMaxHeap(int arr[],int size);
void MaxHeap(int arr[] ,int size,int i);
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
    int arr[] = {1,14,10,8,7,9,30,2,4,6};
     int size = sizeof(arr)/sizeof(arr[0]);
    int i;
    printf("Before Max_Heap: ");
    for(i = 0; i < size; i++)
    {
        printf("%d, ",arr[i]);
    }
    MaxHeap(arr,size,0);
    printf("\nAfter Max_Heap: ");
      for(i = 0; i < size; i++)
    {
        printf("%d, ",arr[i]);
    }
    
}