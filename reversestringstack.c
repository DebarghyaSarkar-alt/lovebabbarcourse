#include <stdio.h>
#include <stdlib.h>
void push(char stack[], int *top, char val){
    (*top)++;
    stack[*top] = val;
}
char pop(char stack[],int *top){
    char temp = stack[*top];
    (*top)--;
    return temp;
}
void reverse(char stack[], int *top){
    while(*top != -1){
        printf("%c", pop(stack, top));
    }
    printf("\n");


}

int main(){
    char str[] = "debarghya";
    char stack[100];
    int top = -1;
    for (int i = 0; str[i]!='\0'; i++)
    {
        push(stack, &top, str[i]);
    }
    reverse(stack, &top);
    return 0;
    

}