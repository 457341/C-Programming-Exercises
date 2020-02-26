#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{   printf("TALES FROM 1 TO 10\n");
    for(int j = 1;j<=10;j++){
        for(int i = 1;i<=10;i++ ){
            printf("%d * %d = %d\t",i,j,i*j);
        }
        printf("\n");
}
    return 0;
}