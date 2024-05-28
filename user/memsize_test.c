#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char* argv[]){
    int initial_memsize = memsize();
    printf("Initial memory size: %d\n", initial_memsize);

    malloc(20);
    char* ptr = malloc(1024*20);
    int afterAlloc_memsize = memsize();
    printf("After allocation memory size: %d\n", afterAlloc_memsize);

    free(ptr);
    int afterFree_memsize = memsize();
    printf("After freeing memory size: %d\n", afterFree_memsize);

    exit(0);
}