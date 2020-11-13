#include <stdio.h>
#include <stdlib.h>

int count_of_elements_in_queue = 0;

struct node{
    int data;
    struct node *next;
}*front = NULL, *rear = NULL;

int is_Queue_EMPTY(){
    if (front == NULL) return 1;
    else return 0;
}

void enQueue(int number_to_be_enqueued){
    
    struct node *temp_node;
    temp_node = (struct node*)malloc(sizeof(struct node));
    temp_node->data = number_to_be_enqueued;
    temp_node->next = NULL;
    if(is_Queue_EMPTY()) front = rear = temp_node;
    else{
        rear->next = temp_node;
        rear = temp_node;
    }
    printf("Insertion(enQueue) is SUCCESS. Inserted the element %d\n\n", rear->data);
    count_of_elements_in_queue++;
}

void deQueue(){
    if(is_Queue_EMPTY()) printf("Queue Underflow. The Queue is empty. Cannot delete(deQueue) from an empty Queue\n\n");
    else{
        printf("Displaying the Queue Elements:\n");
        struct node *temp_node = front;
        front = front->next;
        printf("Deletion(deQueue) SUCCESS. Deleted %d from the Queue\n\n", temp_node->data);
        count_of_elements_in_queue--;
        free(temp_node);
    }
}

void display(){
    if (is_Queue_EMPTY()) printf("Queue is EMPTY. So Cannot Display Elements\n\n");
    else{
        struct node *temp_node = front;
        while(temp_node->next != NULL){
            printf("%d ", temp_node->data);
            temp_node = temp_node->next;
        }
        printf("%d", temp_node->data);
    }
    printf("\n");
}

void main(){
    int choice, element_to_be_enqueued;
    while(1){
        printf("1.enQueue  2.deQueue   3.Display   4.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("\nEnter the number to be inserted: ");
                scanf("%d", &element_to_be_enqueued);
                enQueue(element_to_be_enqueued);
                printf("Elements present in the Queue = %d\n\n",count_of_elements_in_queue);
                break;
            case 2:
                deQueue();
                printf("Elements present in the Queue = %d\n\n",count_of_elements_in_queue);
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
