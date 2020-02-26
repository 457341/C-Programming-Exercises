#include<stdlib.h>
#include<stdio.h>
void swap(int *a,int *b);
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main(){
    int arr[] = {2,5,1,66,44,53,12,67};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i <size;i++){
        printf("%d ,",arr[i]);
    }
    printf("\n");
    for (int i = 0;i<size -1 ;i++){
        for(int j =0 ;j<size -i-1;j++){
            if(arr[j] > arr[j +1]){
                swap(&arr[j],&arr[j-1]);
            }
        }
    }

    for(int i = 0;i <size;i++){
        printf("%d ,",arr[i]);
    }
}