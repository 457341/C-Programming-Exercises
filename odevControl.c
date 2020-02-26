#include<stdio.h>
#include<stdlib.h>
double x_degeri_hesapla(double y);
double y_degeri_hesapla(double x,double z);
double z_degeri_hesapla(double x);
void main(){
    printf("X degeri: %0.5lf \n",x_degeri_hesapla(2.98125));
    double x_yeni =  x_degeri_hesapla(2.98125);
    printf("Z degeri: %0.5lf \n",z_degeri_hesapla(x_yeni));
    double z_yeni = z_degeri_hesapla(x_yeni);
    printf("Y degeri: %0.5lf \n",y_degeri_hesapla(x_yeni,z_yeni));
    double y_yeni = y_degeri_hesapla(x_yeni,z_yeni);
    printf("X'in yeni degeri: %0.5lf \n ",y_yeni);
    printf("X icin MUTALK HATA: %0.5lf \n", 3.02812-3.04376);
    printf("Y icin MUTALK HATA: %0.5lf \n", 2.98795-2.98125);
    printf("Z icin MUTALK HATA: %0.5lf \n",3.98594-3.97812);  
}
double x_degeri_hesapla(double y){
    double answer = (15-3*y)/2;
    return answer;
}
double y_degeri_hesapla(double x,double z){
    double answer = (20.5-z-2*x)/3.5;
    return answer;
}
double z_degeri_hesapla(double x){
    double answer = (11-x)/2;
    return answer;
}