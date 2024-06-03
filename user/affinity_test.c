#include "kernel/types.h"
#include "user/user.h"
 
 int main(int argc, char* argv[]){
    set_affinity_mask((1 << 2) + (1 << 0)); // set mask for cpu 2, 0
    for(;;)
        printf("Current process ID: %d\n", getpid());
    exit(0,0);
 }