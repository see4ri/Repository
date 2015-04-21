#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<sys/types.h>

int spawn(char* program,char** arg_list)
{
 pid_t child_pid;
 child_pid = fork();
 
 if(child_pid != 0)
  return child_pid;
 else {
  execvp(program,arg_list);
  fprintf(stderr,"an error occured in execvp\n");
  abort();
 } 
}

int main() {

 char* arg_list[] = {"./Program01",NULL};
 
 printf("This is the main process \n");
 printf("The process id of main process is %d\n",(int)getpid());
 spawn("./Program01",arg_list);
 return 0;
}
