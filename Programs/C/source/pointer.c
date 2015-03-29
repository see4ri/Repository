#include <stdio.h>
#include <stdlib.h>
char display(void) {
 printf(" Inside void function \n");
} 
int main() {
 int i = 50;
 int *p = &i;
 int arr[20];
 int (*pArray)[20] = &arr;
 char display(void);
 char (*ptrFunc)(void) = &display;
 
 arr[0] = 100;
 printf("Hello World \n");

 return 0;
}
