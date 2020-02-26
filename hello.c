#include<stdio.h>
#include<stdlib.h>

int main(){
int x,y,z;
scanf("%d %d %d",&x,&y,&z);
if( x== 13 ||y==13||z==13){
    if(x==13){
        printf("%d",y+z);
    }
    else if(y==13){
        printf("%d",x+z);
    }
    else
        printf("%d",y+z);
}
else
    printf("%d",x+y+z);

return 0;
}
