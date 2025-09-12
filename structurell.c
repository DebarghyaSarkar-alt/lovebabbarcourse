#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;

node *top = NULL;

void creation(){
    int choice = 1;
    node *temp = NULL;                                  //Should be outside the while loop
    while(choice!=-1){
        node *newNode = (node *)malloc(sizeof(node));
        if(newNode == NULL){
            printf("Memory allocation failed");
            return;
        }
        printf("Enter the data: ");
        scanf("%d", &newNode->data);
        newNode->link = NULL;
        
        if(top == NULL){
            top = temp = newNode;
        } else {
            temp->link = newNode;
            temp = newNode;
        }
        printf("Enter -1 to exit: ");
        scanf("%d", &choice);
    }
}

void push(int val){
    node *newNode = (node *)malloc(sizeof(node));
    newNode -> data = val;
    newNode -> link = NULL;

    if(top == NULL){
        top = newNode;
    } else {
        newNode->link = top;
        top = newNode;
    }
}

void display(){
    node *ptr = top;
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

int main(){
    creation();
    push(69);
    display();
    return 0;
}