#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double fonksiyon(double x);
double ortanca(double x,double y);
double epsilon_hesapla(double xr_yeni,double xr_eski);
int main () {
   printf("FA =  %0.5lf \n",fonksiyon(2.23536));
   printf("FU = %0.5lf \n",fonksiyon(2.23585));
   printf("FR = %0.5lf \n",fonksiyon(  2.23561));
   printf("ortanca XR = %0.5lf \n",ortanca(2.23585,2.23536));
   printf("EA = %0.5lf \n",epsilon_hesapla( 2.23561,2.23585));


}
double fonksiyon(double x){
    return x*x - 5;
}
double ortanca(double x,double y){
    return (x +y)/2;

}
double epsilon_hesapla(double xr_yeni,double xr_eski){
    return ((xr_yeni - xr_eski)/xr_yeni)*100;
}