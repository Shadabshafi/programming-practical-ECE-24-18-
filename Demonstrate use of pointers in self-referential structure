#include <stdio.h>
#include <stdlib.h>

{
    int data;
    struct Node* next; 
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;  
    return newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next; 
    }
    printf("NULL\n");
}

int main() {
    
    Node* head = createNode(1);
    Node* second = createNode(2);
    Node* third = createNode(3);

    
    head->next = second; 
    second->next = third;


    printf("Linked list: ");
    printList(head);

    
    free(head);
    free(second);
    free(third);

    return 0;
}
