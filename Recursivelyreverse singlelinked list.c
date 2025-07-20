/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h> 

#include <stdlib.h> 

struct Node { 

    int data; 

    struct Node *next; 

}; 

void RevSLL(struct Node**head)
{
    static struct Node *next = NULL;
    static struct Node *prev = NULL;
    static struct Node *current;
    
    if(prev == NULL)
        current = (*head);
        
    if(current != NULL)
    {
        next = current->next;
        
        current->next = prev;
        
        prev = current;
        
        current = next;
        
        (*head) = prev;
        
        RevSLL(head);
    }
	else if (current == (*head))//check head node is NULL or not
	{
		printf("head node not yet created\n");
		return;
	} else {
	
		return;
	}
    
    
}


 //Insert front 

void insertFront(struct Node** head, int data){ 

    struct Node* newNode; 

    if((newNode = (struct Node*)malloc(sizeof(struct Node))) == NULL) 

    { 

  		printf("Can't allocate memory\n"); 

  		exit(EXIT_FAILURE); 

    } 

newNode->data = data; 

newNode->next = (*head);//previous head move to second node 

(*head) = newNode;//new node will be head node 

printf("data %hi\n",(*head)->data); 

} 

  

//Insert at the end 

void insertEnd(struct Node** head, int data) { 

  

struct Node* newNode; 

  	if((newNode = (struct Node*)malloc(sizeof(struct Node))) == NULL) 

  	{ 

  		printf("Can't allocate memory\n"); 

  		exit(EXIT_FAILURE); 

  	} 

newNode->data = data; 

newNode->next = NULL; 

  

struct Node *temp = (*head); 

while(temp->next != NULL){ 

  temp = temp->next; 

} 

  

temp->next = newNode; 

 

} 

 

//Insert middle 

void insertMiddle(struct Node** head, int NewNodeposition, int data){ 

  

struct Node* newNode; 

if((newNode = (struct Node*)malloc(sizeof(struct Node))) == NULL) 

{ 

  	printf("Can't allocate memory\n"); 

  	exit(EXIT_FAILURE); 

} 

newNode->data = 4; 
struct Node *temp = (*head); 

for(int i=2; i < NewNodeposition; i++) { 

  if(temp->next != NULL) { 

temp = temp->next; 

  } 

} 
newNode->next = temp->next; 
temp->next = newNode; 

} 

//Display single linked list 

void DisplaySLL(struct Node** head){ 

struct Node *temp = (*head); 

    printf("Single linked list\n Data %d-->", temp->data);    

while(temp->next != NULL){ 

    printf(" %d-->", temp->next->data); 

temp = temp->next; 

} 

if(temp->next == NULL) 

    printf("NULL\n"); 

} 

  

// delete a node from the doubly linked list 

void deleteNode(struct Node** head, struct Node* del_node) { 

  

if(del_node != NULL && (* head) != NULL){ 

//delete node is head node 

if((* head) == del_node) 

{ 

(*head) = del_node->next; 

} 

else 

{ 

struct Node *temp = (*head), *prev; 

//traverse and get  

while(temp != del_node && temp->next != NULL){ 

prev = temp; 

temp = temp->next; 

} 

  

if(temp->next == NULL) 

{ 

//Because delete node is last node. 

//So keep its previous node as last node. 

prev->next = NULL; 

} 

else 

{ 

//delete node is mid one. 

prev->next = temp->next; 

} 

} 

} 

else 

{ 

  

if((* head) == NULL) 

printf("Single Linked list empty\n"); 

 

} 

free(del_node); 

} 

  

int main() 

{ 

/* Initialize nodes */ 

struct Node *head = NULL; 

 

short si2_input; 

RevSLL(&head); 

/*	printf("Give the input\n"); 

scanf("%hi",&si2_input);*/ 

 

//insert front 

insertFront(&head, 76); 

 

//insert front 

insertFront(&head, 90); 

 

//insert front 

insertFront(&head, 87); 

 

DisplaySLL(&head); 

RevSLL(&head);

DisplaySLL(&head); 

    return 0;
}

