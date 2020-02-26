#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){

    int arr[100];

    srand(time(NULL));

    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Array before inseration: ");
	int k,m,j;
    for(k = 0;k<size;k++){
        arr[k] = rand() % 100 + 1;
    }
    for(m = 0;m<size;m++){
        printf("%d ,",arr[m]);
    }
    printf("\n");
// 10000 6.863 s ,1000  0.381 s,100000 41.052 s
    for( j = 1 ;j<size;j++){
         key = arr[j];
        
        i = j-1;
        while(i >= 0 &&  arr[i] > key){
            arr[i+1]= arr[i];
            i = i-1;
        }
        arr[i+1] = key;

    }
    printf("Array after inseration: ");
    for(z = 0;z<size;z++){
        printf("%d ,",arr[z]);
    }
    return 0;
}
