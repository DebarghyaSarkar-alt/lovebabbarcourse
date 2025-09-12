#include <stdio.h>
#define num 5
int stack[num];
int top = -1;

void push(){
    int choice = 1;
    while(choice!=-1){
        if(top == num-1){
            printf("Overflow\n");
            return;
        } else {
            top++;
            printf("Enter the element: ");
            scanf("%d", &stack[top]);
        }
        printf("Enter -1 to exit: ");
        scanf("%d", &choice);
    }
}

void pop(){
    if(top == -1){
        printf("Underflow");
        return;
    } else {
        int item;
        item = stack[top];
        top--;
        printf("The poped item is: %d\n", item);
    }
}

void peak(){
    if(top == -1){
        printf("Underflow");
    } else {
        printf("The top most element is: %d", stack[top]);
    }
}

int isFull(){
    if(top == num-1){
        printf("The stack is full");
        return 1;
    } else {
        printf("The stack is not full");
        return 0;
    }
}

int isEmpty(){
    if(top == -1){
        printf("The stack is empty");
        return 1;
    } else {
        printf("The stack is not empty");
        return 0;
    }
}

void display(){
    for(int i=top; i>=0; i--){                      //imp
        printf("%d ", stack[i]);
    }
}

int main(){
    int choice;
    while(1){
        printf("\nEnter the choice: \n");
        printf("1. To Push the element: \n");
        printf("2. To Pop the element: \n");
        printf("3. To Peak the element: \n");
        printf("4. To check is Full: \n");
        printf("5. To check is Empty: \n");
        printf("6. To Exit: \n");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                push();
                display();
                break;
            case 2:
                pop();
                display();
                break;
            case 3:
                peak();
                break;
            case 4:
                isFull();
                break;
            case 5:
                isEmpty();
                break;
            case 6:
                exit(1);
            default:
                printf("Invalid operation");
        }
    }
    return 0;
}