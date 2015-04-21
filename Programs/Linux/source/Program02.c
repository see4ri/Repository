#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main() {

 printf("This is program 02 \n");
 printf("The process id of parent program02 is %d\n",(int)getppid());
 printf("The process id of program02 is %d\n",(int)getpid());
 return 0;
}
