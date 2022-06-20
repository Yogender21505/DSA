#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
void reverse(struct Node** head)
{
    struct Node* previous = NULL;   // the previous pointer
    struct Node* current = *head;   // the main pointer
 
    // traverse the list
    while (current != NULL)
    {
        // tricky: note the next node
        struct Node* next = current->next;
 
        current->next = previous;    // fix the current node
 
        // advance the two pointers
        previous = current;
        current = next;
    }
 
    // fix the head pointer to point to the new front
    *head = previous;
}

int main(void)
{
    int n;
    scanf("%d",&n);
    struct Node* head = NULL;
    struct Node* temp,*ext,*newnode;
    for (int i =0;i<n;i++) {
        if (head==NULL){
            head= (struct Node*)malloc(sizeof(struct Node));
            scanf("%d",&head->data);
            head->next=NULL;
            temp=head;
        }
        else{
        newnode = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        temp->next= newnode;
        temp=newnode;
            }
    }
    // while (head!=NULL){
    //     printf("%d ",head->data);
    //     head=head->next;
    // }
    reverse(&head);
    while (head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
}