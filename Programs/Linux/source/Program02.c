#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>

/*Thread data structure*/
struct threadData {
 char name[20];
 int id;
};

/*This is thread 04*/
void* func1(void* param)
{
 struct threadData *temp;
 
 temp = (struct threadData *)param;
 
 printf("Start Thread 4\n");
 
 printf("thread name : %s\n",temp->name);
 printf("thread id : %d\n",temp->id);
 
 printf("End Thread 4\n");

 return 0;
}

/*This is thread 05*/
void* func2(void* param)
{
 struct threadData *temp;
 
 temp = (struct threadData *)param;
 
 printf("Start Thread 5\n");
 
 printf("thread name : %s\n",temp->name);
 printf("thread id : %d\n",temp->id);
 
 printf("End Thread 5\n");
 
 return 0;
}

/*This is thread 06*/
void* func3(void* param)
{
 struct threadData *temp;
 
 temp = (struct threadData *)param;
 
 printf("Start Thread 6\n");
 
 printf("thread name : %s\n",temp->name);
 printf("thread id : %d\n",temp->id);
 
 printf("End Thread 6\n");
 
 return 0;
}

int main() {
 pthread_t thread_id4, thread_id5, thread_id6;
 struct threadData thread_arg4, thread_arg5, thread_arg6;
 
 printf("Start of Process 02 \n");
 printf("The process id of parent Process 02 is %d\n",(int)getppid());
 printf("The process id of Process 02 is %d\n",(int)getpid());
 
 strcpy(thread_arg4.name,"Thread 04");
 thread_arg4.id   = 04;

 strcpy(thread_arg5.name,"Thread 05");
 thread_arg5.id   = 05;
 
 strcpy(thread_arg6.name,"Thread 06");
 thread_arg6.id   = 06;
 
 
 pthread_create(&thread_id4,NULL,&func1,&thread_arg4);
 pthread_create(&thread_id5,NULL,&func2,&thread_arg5);
 pthread_create(&thread_id6,NULL,&func3,&thread_arg6);
 
 printf("End of Process 02 \n");

 return 0;
}
