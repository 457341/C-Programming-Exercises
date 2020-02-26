#include<stdio.h>
#include<stdlib.h>
void main(int arr[],int i){
    arr[] = {1,14,10,8,7,9,3,2,4,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    /* for(int i = 0; i < size; i++)
    {
        printf("%d, ",arr[i]);
    } */
    //printf("\n");
    int l = 2*i;
    int r = 2*i + 1;
    int largest ;
    int heapSize = 10;
    if(l <=heapSize && arr[l]> arr[i])
            largest = l;
    else
    {
        largest = i;
    }
    if (r<=heapSize && arr[r] > arr[largest]) {
        largest = r;
    }
    if (i =! largest) {
        arr[i] = arr[largest];
        arr[largest] = arr[i];
        main(arr,heapSize, largest);
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d, ",arr[i]);
    }
    
}