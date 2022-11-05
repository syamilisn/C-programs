#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;

void display(node *head){
    node* temp;
    temp = head;
    if(temp == NULL){
        printf("\nThe list is empty\n");
        return;
    }
    while(temp!=NULL){
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

void main(){
    node* head = NULL;
    node* second = NULL;
    node* third = NULL;
    display(head);
    //allocate 3 nodes in heap
    head = (node*)malloc(sizeof(node));
    second = (node*)malloc(sizeof(node));
    third = (node*)malloc(sizeof(node));
    //assign data to node
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    display(head);
}