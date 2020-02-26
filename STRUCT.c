#include<stdlib.h>
#include<stdio.h>
#include <string.h>
struct Student
{
    int age;
    char name[20];
    char country[30];

};

void main(){
    struct Student s1;
    s1.age = 15;
    strcpy(s1.country , "Pakistan");
    strcpy(s1.name , "Mazhar ");
    printf("%d",s1.age);
    printf("\n%s",s1.country);
    printf("\n%s",s1.name);
}