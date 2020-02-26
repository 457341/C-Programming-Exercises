#include<stdlib.h>
#include<stdio.h>
void arrayOfPointer(int *arr,int size);
void main(){
    int dizi[] = {1,2,3,4,5};
    int size = 5;
     for(int i = 0; i < size; i++)
    {
        printf("%d, ",dizi[i]);
    }
    arrayOfPointer(dizi,size);
    printf("Manzoor Hussain");
      for(int i = 0; i < size; i++)
    {
        printf("%d, ",dizi[i]);
    }
}
void arrayOfPointer(int *arr,int size){
    for(int i = 0; i < size; i++)
    {
        arr[i] = arr[i] +1;
    }
    
}