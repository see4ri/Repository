#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

/*Thread data structure*/
struct threadData {
 char name[20];
 int id;
};

/*This is thread 01*/
void* func1(void* param)
{
 struct threadData temp;
 
 temp = (threadData *)param;
 
 printf("Start Thread 1\n");
 
 printf("thread name : %s",temp->name);
 printf("thread id : %d",temp->id);
 
 printf("End Thread 1\n");
}

/*This is thread 02*/
void* func2(void* param)
{
 struct threadData temp;
 
 temp = (threadData *)param;
 
 printf("Start Thread 2\n");
 
 printf("thread name : %s",temp->name);
 printf("thread id : %d",temp->id);
 
 printf("End Thread 2\n");
}

/*This is thread 03*/
void* func3(void* param)
{
 struct threadData temp;
 
 temp = (threadData *)param;
 
 printf("Start Thread 3\n");
 
 printf("thread name : %s",temp->name);
 printf("thread id : %d",temp->id);
 
 printf("End Thread 3\n");
}

int main() {
 pthread_t thread_id1, thread_id2, thread_id3;
 struct threadData thread_arg1, thread_arg2, thread_arg3;
 
 printf("Start of Process 01 \n");
 printf("The process id of parent Process 01 is %d\n",(int)getppid());
 printf("The process id of Process 01 is %d\n",(int)getpid());
 
 thread_arg1.name = "Thread 01";
 thread_arg1.id   = 01;
 
 thread_arg2.name = "Thread 02";
 thread_arg2.id   = 02;
 
 thread_arg3.name = "Thread 03";
 thread_arg3.id   = 03;
 
 
 pthread_create(&thread_id1,NULL,&func1,&thread_arg1);
 pthread_create(&thread_id2,NULL,&func2,&thread_arg2);
 pthread_create(&thread_id3,NULL,&func3,&thread_arg3);
 
 printf("End of Process 01 \n")
 return 0;
}
