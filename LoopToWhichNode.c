#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int detectLoop(struct Node* list) {
    struct Node* slow_p = list;
    struct Node* fast_p = list;

    while (slow_p && fast_p && fast_p->next) {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;

        if (slow_p == fast_p) {
            return 1; // Loop found
        }
    }
    return 0; // No loop
}
/*


void DisplaySLL(SLL** head){ 

    SLL *temp = (*head); 

        printf("Single linked list\n Data %d-->", temp->data); 
    
         
    
    while(temp->next != NULL){ 
    
        printf(" %d-->", temp->next->data); 
    
        temp = temp->next; 
    
    } 
    
    if(temp->next == NULL) 
    
        printf("NULL\n"); 

}*/





int main() {
    struct Node* head = NULL;
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);

    // Create a loop for testing (connecting last node to the first)
    head->next->next->next->next = head;

    if (detectLoop(head))
        printf("Loop found");
    else
        printf("No Loop");

    return 0;
}

