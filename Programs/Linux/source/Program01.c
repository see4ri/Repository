#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main() {

 printf("This is program 01 \n");
 printf("The process id of parent program01 is %d\n",(int)getppid());
 printf("The process id of program01 is %d\n",(int)getpid());
 return 0;
}
