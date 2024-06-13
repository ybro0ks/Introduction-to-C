#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void insertAtFront(struct Node** head, int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = data;
    newNode -> next = *head;
    *head = newNode;
};
int pop(struct Node**head){
if ( *head == NULL){
    printf("List is empty.");
    return -1;
}
struct Node* temp = *head;
int data = temp -> data;
*head = (*head)->next;
free(temp);

return data;
}

int main (){
    struct Node* head = NULL;
    insertAtFront(&head, 3);
    insertAtFront(&head, 4);
    insertAtFront(&head, 2);
}
