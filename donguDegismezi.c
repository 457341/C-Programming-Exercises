#include <stdio.h>
#include <stdlib.h>

void main(){
    int j = 5;
    int i = 0;
    printf("Baslangic Dongu Degismezi:  %d\n",i+j);
    for(i = 0; i < j; i++)
    {
        printf("Devam Dongu Degismezi:  %d\n",i+j);
        j--;
    }
    printf("Bitis Dongu Degismezi:  %d\n",i+j);

}