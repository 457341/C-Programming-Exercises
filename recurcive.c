#include<stdlib.h>
#include<stdio.h>
void test(int x);
void main(){
    printf("Manzoor Hussain\n");
    test(5);
}
void test(int x){
    if (x>0) {
        for(int i = 0; i < x; i++)
        {
           printf("%d\n",x);
        }
        
        printf("%d\n",x);
        test(x-1);
    }
    
}