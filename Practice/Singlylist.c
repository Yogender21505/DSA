#include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <malloc.h>

// // Define node structure
// typedef struct node
// {
//     int data;
//     struct node *next;
// } node;

// int main()
// {
//     node *start=NULL,*newnode,*nextnode,*rn,*pn;
//     int ch,n,x,c,f;

//     for(;;)		// An infinite loop
//     {
//         system("cls");		// for clearing the screen
//         printf("1. Add\n");
//         printf("2. Insert Before\n");
//         printf("3. Insert After\n");
//         printf("4. Count\n");
//         printf("5. Search\n");
//         printf("6. Delete\n");
//         printf("7. Reverse\n");
//         printf("8. Display\n");
//         printf("Enter Choice: ");
//         scanf("%d",&ch);

//         switch(ch)
//         {
//             case 1:		// Create new node
//             printf("Enter a number ");
// scanf("%d",&n);

// // create a new node
// newnode=(node*)malloc(sizeof(node));
// newnode->data=n;         // assign the value of n in the data part of newnode
// newnode->next=NULL;      // assign the value NULL in the next part of newnode

// if(start==NULL)     // if start is NULL
// {
//     start=newnode;		// then assing the newnode in start (start points to the first node in the memory)
// }
// else
// {
//     rn=start;	// if start is not NULL then assign start in rn to start reading from the first node

//     // run a while loop until if we find NULL in the next part of rn
//     while(rn->next!=NULL)
//     {
//         rn=rn->next;     // if rn->next part is not NULL then move to the next node
//     }
//     rn->next=newnode;    // when while loop ends, the rn stands at the last node and we assign the newnode in the next part of the rn
// }
//                 break;

//             case 2:		// Insert node before
//             f=0;
// if(start==NULL)
// {
//     printf("List is empty");
//     getch();	// pause the loop to see the message
// }
// else
// {
//     printf("Insert Number ");
//     scanf("%d",&n);
//     printf("Insert Before ");
//     scanf("%d",&x);

//     // Create a new node
//     newnode=(node*)malloc(sizeof(node));
//     newnode->data=n;
//     newnode->next=NULL;

//     // search number x in the list from the starting node
//     rn=start;
//     while(rn!=NULL)
//     {
//         if(start==rn && rn->data==x)     // insert before first node
//         {
//             newnode->next=rn;	// newnode->next = recent node
//             start=newnode;		// start = new node
//             f=1;
//             break;
//         }
//         else if(start!=rn && rn->data==x)    // insert before recent node
//         {
//             newnode->next=pn->next;	    // newnode->next = previous node->next
//             pn->next=newnode;		    // previous node->next = newnode
//             f=1;
//             break;
//         }
//         pn=rn;      // previous node = recent node
//         rn=rn->next;     // recent node = recent node->next
//     }

//     if(f==0)
//     {
//         printf("Number not found");

//         // delete the newely created node
//         free(newnode);

//         getch();	// pause the loop to see the message
//     }
// }
// break;
//                 break;

//             case 3:		// Insert node after
//                 break;

//             case 4:		// Count total nodes
//                 break;

//             case 5:		// Search a node
//                 break;

//             case 6:		// Delete a node
//                 break;

//             case 7:		// Reverse list
//                 break;

//             case 8:		// Display all nodes
//                 break;

//             default:	// default case for wrong choice input
//                 printf("Wrong Choice");
//                 getch();	// pause the loop to see the message
//         }
//     }
//     return 0;
// }
int main()
{
int n,i;
scanf("%d",&n);
char arr[n];
scanf("%s",&arr);
printf("%s",arr);}