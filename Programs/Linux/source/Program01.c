#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
int func1()
{
 printf("Inside Function 1\n");
}
int main() {
 pthread_t thread_id1, thread_id2, thread_id3;
 printf("This is program 01 \n");
 printf("The process id of parent program01 is %d\n",(int)getppid());
 printf("The process id of program01 is %d\n",(int)getpid());
 return 0;
}
