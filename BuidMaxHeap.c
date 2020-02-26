#include<stdio.h>
#include<stdlib.h>
void maxHeap(int *arr,int i);
void main(){
    int arr[] = {1,14,10,8,7,9,3,2,4,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("\n");
    maxHeap(arr,1);
}
void maxHeap(int *arr,int i){
    int *new_arr = malloc(sizeof(int) * 10);
    int l = 2*i;
    int r = 2*i + 1;
    int largest ;
    int heapSize = 10;
    if(l <=heapSize && new_arr[l]> new_arr[i])
            largest = l;
    else
    {
        largest = i;
    }
    if (r<=heapSize && new_arr[r] > new_arr[largest]) {
        largest = r;
    }
    if (i =! largest) {
       int temp = arr[i];
    arr[i] = arr[largest];
    arr[largest] = temp;
    maxHeap(new_arr,largest);
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d, ",new_arr[i]);
    }
}
