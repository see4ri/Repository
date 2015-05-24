#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>
#include <time.h>

/* Defines */
#define STRING_MAX 50 /* Maximum length of the string */

/* Thread Data*/
struct Data {
    char carNumber[STRING_MAX];
    long ownerTokenID;
    struct tm time;
};

int main (int argc,char* argv[]) {
    pthread_t thread_id1, thread_id2, thread_id3;
    time_t timer;

    printf(" Current timing of the process is %s \n",asctime(localtime(&timer)));

    printf("Inside Entry system process \n");

    return 0;
}

