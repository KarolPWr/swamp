#include <time.h>
#include <stdio.h>

#include "shed.h"


void now_leave(void){
    FILE *fptr;

    // use appropriate location if you are using MacOS or Linux
    fptr = fopen("/proc/sysrq-trigger","w");

    fprintf(fptr, "%c", 'b');
    fclose(fptr);
}


void welcome_to_swamp(void){
    struct timespec time = {0};

    printf("WHAT ");
    fflush(stdout);
    time.tv_nsec = 500 * NANO_MULTI;
    nanosleep(&time, NULL);

    printf("ARE ");
    fflush(stdout);
    time.tv_nsec = 200 * NANO_MULTI;
    nanosleep(&time, NULL);

    printf("YOU ");
    fflush(stdout);
    time.tv_nsec = 300 * NANO_MULTI;
    nanosleep(&time, NULL);

    printf("DOING ");
    fflush(stdout);
    time.tv_nsec = 400 * NANO_MULTI;
    nanosleep(&time, NULL);

    printf("IN ");
    fflush(stdout);
    time.tv_nsec = 200 * NANO_MULTI;
    nanosleep(&time, NULL);

    printf("MY ");
    fflush(stdout);
    time.tv_nsec = 500 * NANO_MULTI;
    nanosleep(&time, NULL);
    
    printf("SWAMP?\n");
    time.tv_nsec = 500 * NANO_MULTI;
    nanosleep(&time, NULL);

}