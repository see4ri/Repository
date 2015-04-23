#include "../include/LinkedList.h"
#include<stdio.h>
#include<stdlib.h>

/* Linked list node structure */
struct node {
 int data;
 struct node *next;
};

/* Allocate a new node */
struct node *newNode(int data) {
 struct node *Node;
 
 Node = (struct node *)malloc(sizeof(struct node));
 
 Node->data = data;
 Node->next = NULL;
 
 return Node;
}

/* Insert node at the front of the list */
void insertNodeFront(struct node **Head) {

}


/* Insert node at the last of the list */
void insertNodeLast(struct node *Node) {

}


/* Insert node at the after a given position of the list */
void insertNodeAfter(struct node *Node) {

}



int main() {
 int choice;
 do {
  printf("\n\n\n *************** Enter your choice *****************\n\n\n");
  printf("0. Exit \n");
  printf("1. Insert a node.\n");
  printf("2. Delete a node. \n");
  printf("3. Length of the list. \n");
  printf("4. Get the nth node. \n");
  printf("5. Delete a list. \n");
  printf("6. Reverse a list. \n");
  printf("7. Detect a loop in the list. \n");
  printf("8. Print the list. \n"); 
  printf("9. List is palindrome ? \n");
  printf("10. Remove duplicate from list. \n");
  printf("11. Intersection point of two list. \n");
  printf("12. Merge two list. \n");
  printf("13. Union and Intersection of two lists. \n");
  printf("14. Rotate a list. \n");
  printf("15. Flattening a list. \n");
  scanf("%d",&choice);

  switch(choice) {
   /* Exit */
   case 0 :
    break;

   /* Insert a node */
   case 1 :
    break;

   /* Delete a node */
   case 2 :
    break;

   /* Length of the list */
   case 3 :
    break;
   
   /* Get the nth node */
   case 4 :
    break;
   
   /* Delete a list */
   case 5 :
    break;
   
   /* Reverse a list */
   case 6 :
    break;
   
   /* Detect a loop in the list */
   case 7 :
    break;
   
   /* Print the list */
   case 8 : 
    break;

   /* List is palindrome ? */
   case 9 :
    break;

   /* Remove duplicate from the list */
   case 10 :
    break;

   /* Intersection point of two list */
   case 11 :
    break;

   /* Merge two list */
   case 12 :
    break;

   /* Union and Intersection of list */
   case 13 :
    break;

   /* Rotate a list */
   case 14 :
    break;

   /* Flattening a list */
   case 15 :
    break;

   /* */
   default :
    break;
  } 
 } while(choice !=0); 
 return 0;
}

