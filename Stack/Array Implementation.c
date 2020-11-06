#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

int stack[MAX_SIZE], top = -1;

int is_Stack_FULL(){
    if (top == MAX_SIZE-1) return 1;
    else return 0;
}

int is_Stack_EMPTY(){
    if (top == -1) return 1;
    else return 0;
}

void push(int number_to_be_pushed){
    if (is_Stack_FULL()) printf("Stack Overflow. The Stack is already full. No more Insertion(Pushing) is possible\n\n");
    else{
        top++;
        stack[top] = number_to_be_pushed;
        printf("Insertion(Pushing) is SUCCESS. Inserted the element %d\n\n",stack[top]);
    }
}

void pop(){
    if (is_Stack_EMPTY()) printf("Stack Underflow. The Stack is empty. Cannot delete(Pop) from an empty stack\n\n");
    else{
        int deleted_element = stack[top];
        top--;
        printf("Deletion(Popping) SUCCESS. Deleted %d from the Stack\n\n",deleted_element);
    }
}

void display(){
    if (is_Stack_EMPTY()) printf("Stack is EMPTY. So Cannot Display Elements\n\n");
    else{
        printf("Displaying the Stack Elements:\n");
        for(int i=top; i>=0; i--) printf("%d ", stack[i]);
        printf("\n\n");
    }
}

void main(){
    int choice, element_to_be_pushed;
    while(1){
        printf("1.Push  2.Pop   3.Display   4.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("\nEnter the number to be inserted: ");
                scanf("%d",&element_to_be_pushed);
                push(element_to_be_pushed);
                printf("Elements present in the Stack = %d\n\n",top+1);
                break;
            case 2:
                pop();
                printf("Elements present in the Stack = %d\n\n",top+1);
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting.....");
                exit(0);
                break;
            default:
                printf("\nPlease enter a correct selection");
        }
    }
}





















