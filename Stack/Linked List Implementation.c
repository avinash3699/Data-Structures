#include <stdio.h>
#include <stdlib.h>

int  count_of_elements_in_stack = 0;

struct node{
    int data;
    struct node *next;
}*top = NULL;

int is_Stack_EMPTY(){
    if (top == NULL) return 1;
    else return 0;
}

void push(int number_to_be_inserted){
    
    struct node *temp_node;
    temp_node = (struct node*)malloc(sizeof(struct node));
    temp_node->data = number_to_be_inserted;
    temp_node->next = top;
    top = temp_node;
    printf("Insertion(Pushing) is SUCCESS. Inserted the element %d\n\n",top->data);
    count_of_elements_in_stack++;
}

void pop(){
    if(is_Stack_EMPTY()) printf("Stack Underflow. The Stack is empty. Cannot delete(Pop) from an empty stack\n\n");
    else{
        printf("Displaying the Stack Elements:\n");
        struct node *temp_node;
        temp_node = top;
        top = temp_node->next;
        printf("Deletion(Popping) SUCCESS. Deleted %d from the Stack\n\n",temp_node->data);
        count_of_elements_in_stack--;
        free(temp_node);
    }
}

void display(){
    if (is_Stack_EMPTY()) printf("Stack is EMPTY. So Cannot Display Elements\n\n");
    else{
        struct node *temp_node;
        temp_node = top;
        while(temp_node->next!=NULL){
            printf("%d ",temp_node->data);
            temp_node = temp_node->next;
        }
        printf("%d",temp_node->data);
    }
    printf("\n");
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
                printf("Elements present in the Stack = %d\n\n",count_of_elements_in_stack);
                break;
            case 2:
                pop();
                printf("Elements present in the Stack = %d\n\n",count_of_elements_in_stack);
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
