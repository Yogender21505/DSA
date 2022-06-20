#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*next;
}*head;

void push(int data){
    struct node *temp= malloc(sizeof(struct node));

    if (!temp){
        printf("overfolow\n");
        exit(1);
    }

    temp->data=data;
    temp->next=head;
    head=temp;


}

void pop(){

}
void peek(){
    
}
void print(){
    struct node* temp;
    if(head== NULL){
        printf("UNDERFOLW");
        exit(1);
    }
    else{
        temp=head;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;

        }
    }


}

int main (){
    int n;
    printf("ENter the length of element in array=");
    scanf("%d",&n);
    int a[n];
    for (int i =0;i<n;i++) 
    {
        scanf("%d",&a[i]);
        push(a[i]);
    }
    print();
}


