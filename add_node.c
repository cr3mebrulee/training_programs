#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

void insert_to_beginning(Node **top, int j)
{
    Node *new_Node = malloc(sizeof(Node));
    if(!new_Node)
        exit(1);
    new_Node->data = j;
    new_Node->next = *top;
    *top = new_Node;  
    printf("The value of the first_node is: %d\n", new_Node->data); 
}

int main()
{
    Node *top = NULL;
    int arr[] = {10, 20, 30};

    insert_to_beginning(&top, arr[0]);
    printf("The top node value is: %p\n", (void *)top);
}
