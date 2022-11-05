#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;

node * create(){
    node *temp, *new, *head;
    int val, flag;
    char ans = 'y';
    node *get_node();
    temp = NULL;
    flag = 1;

    do{
        printf("Enter the element:\n");
        scanf("%d", val);
        new = get_node();
        if(new == NULL)     printf("Memory is not allocated.\n");
        new->data = val;
        if (flag == 1){
            head = new;
            temp = head;
            flag = 0;
        }
        else{
            temp->next = new;
            temp = new;
        }
        printf("Do you want to enter more elements?\n");
        ans = getchar();
    }while(ans == 'y');
    printf("Singly linked list is created.\n");
//    getch();
 //   clrscr();
    return head;
}

node *get_node(){
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->next=NULL;
    return temp;
}
void main(){
    node* n1 = create();
}