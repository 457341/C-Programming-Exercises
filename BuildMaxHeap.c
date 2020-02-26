#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
void maxHeap(int arr[],int n,int i);
void maxHeap(int arr[],int n ,int i){
    //int *arr = malloc(sizeof(int) * 10);
    int l,r,largest,temp;
    l = 2*i;
    r = 2*i +1;
    if(l <=n && arr[l]> arr[i])
            largest = l;
    else
        largest = i;
    if (r<=n && arr[r] > arr[largest])
        largest = r;
    if (largest != i) {
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        maxHeap(arr,n, largest);
    }  
}
void main(){
    int arr[] = {1,14,10,8,7,9,3,2,4,6,55};
    int i=1;
    int n = 10;
    printf("Before Max_Heap: ");
    for(i = 1; i <= n; i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("\n");
    for(i=(n)/2; i> 0;i--)
    {
        maxHeap(arr,n,i);
    }
    printf("\nAfter Max_Heap: ");
      for(i = 1; i <= n; i++)
    {
        printf("%d, ",arr[i]);
    }
}