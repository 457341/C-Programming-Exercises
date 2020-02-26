#include<stdlib.h>
#include<stdio.h>
void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}
void main(){
    int arr[] = {2,5,1,66,44,53,12,067};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0;i<size -2){
        for(int j = size;j>i +1;j--){
            if(arr[j] < arr[j-1]){
                swap(arr[j],arr[j-l]);
            }
        }
    }
}