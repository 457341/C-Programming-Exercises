#include<stdio.h>
#include<stdlib.h>
void main(){
    int size;
    printf("print array size: ");
    scanf("%d",&size);
    int arr[size];
    
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array before inseration: ");
    for(int k = 0;k<size;k++){
        printf("%d ,",arr[k]);
    }
    printf("\n");
    
    for(int j = 1;j<size;j++){
        int key = arr[j];
        int i;
        i = j-1;
        while(i >= 0 &&  arr[i] > key){
            arr[i+1]= arr[i];
            i = i-1;
        }
        arr[i+1] =key;
        
    }
    printf("Array after inseration: ");
    for(int k = 0;k<size;k++){
        printf("%d ,",arr[k]);
    }
    
}