#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/resource.h>

int spawn_task(char* program,char** arg_list) {
    pid_t child_pid;
    child_pid = fork();

    /* parent process */
    if(child_pid != 0) {
	return child_pid;
    }
    else{
	/* child process */
	execvp(program,arg_list);
	fprintf(stderr,"an error has occured in execvp\n");
	abort();
    }
}
int main (int argc,char* argv[]) {
    char *entryArg[] = {"./EntrySystem",NULL}; /* entry system process argument */
    char *exitArg[] = {"./ExitSystem",NULL}; /* exit system process argument */

    spawn_task("./EntrySystem",entryArg);
    spawn_task("./ExitSystem",exitArg);
  
    return 0;
}

