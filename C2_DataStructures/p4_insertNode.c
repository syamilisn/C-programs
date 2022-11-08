#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}node;
node* create_node(node* head){
    if(head == NULL){
        head = (node*)malloc(sizeof(node));
        printf("Enter head node data: ");
        scanf("%d", &head->data);
        head->next = NULL;
        return head;
    }
    else{
        node* new = (node*)malloc(sizeof(node));
        printf("Enter node data: ");
        scanf("%d", &new->data); 
        new->next = head;   //INSERT AT BEGINNING
        head = new;
        return head;
    }
}
void print_list(node* n){
    printf("The list of elements are: \n");
    while(n != NULL){
        printf("%d->", n->data);
        n = n->next;
    }
}
void main(){
    int n, i;
    //node* head = (node*)malloc(sizeof(node));
    node* head = NULL;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        head = create_node(head);
    }
    print_list(head);
}