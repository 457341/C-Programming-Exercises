#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
}Node;


void Insert(int x){
    struct Node* head;
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    //if(head != NULL)temp->next = head;
    head = temp; 
}
void Print(){
    //struct Node* head;
    struct Node* temp  = head;
    printf("list is:");
    while(temp != NULL){
        printf("%d,",temp->data);
        temp= temp->next;
    }
    printf("\n");
}
struct Node* head;
void Insert(int x);
void Print();
int main(){
    struct Node* head;
    head = NULL;
    printf("how many numbers?\n");
    int n,i,x;
    scanf("%d",&n);
    for(i = 0;i<n;i++){
        printf("enter number:");
        scanf("%d",&x);
        Insert(x);
        Print();
    }
    
}