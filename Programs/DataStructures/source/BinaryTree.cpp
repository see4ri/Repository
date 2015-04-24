#include "../include/BinaryTree.h"

int main(void) {
 int choice;
 do { 
 printf("\n\n***************** Enter your choice ******************\n\n"); 
 printf("0. Exit.\n");
 printf("1. Tree Traversal. \n");
 printf("2. Size of a tree. \n");
 printf("3. Determine if two tree are identical. \n");
 printf("4. Maximum Depth or Height of a tree. \n");
 printf("5. Delete a tree. \n");
 printf("6. Convert a binary tree into its minor tree. \n");
 printf("7. Given two traversal sequence, can you construct binary tree. \n");
 printf("8. Print out all of its root to leaf paths one per line. \n");
 printf("9. Great tree-list recursion problem. \n");
 printf("10. Level order tree traversal. \n");
 printf("11. Count lead nodes in a tree. \n");
 scanf("%d",&choice);

  } while(choice != 0);
 return 0;
}
