#include<stdio.h>
void main(){
    int arr[] = {2,5,19,8,4,10,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0];
    for(int i = 1;i<size;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("%d",min);
}