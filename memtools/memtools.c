/*******************************************************************            
 Author: Chris Ranc                                                             
 memtools.c : v1.0                                                          
 license : GPL v2.0                                                             

    Memory related tools to do error checking for                 
 when allocating or reallocating memory.                                        

********************************************************************/
#include <stdio.h>
#include "memtools.h"

/*malloc with memory error check*/
void *emalloc(size_t size, char *errmsg){
    void *val = malloc(size);
    if(val == NULL){
        fprintf(stderr, "\n%s\n", errmsg);
        exit(12);
    }
    return val;
}
/*realloc with memory error check*/
void *erealloc(void *ptr, size_t size, char *errmsg){
    void *val = realloc(ptr, size);
    if(val == NULL){
        fprintf(stderr, "\n%s\n", errmsg);
        exit(12);
    }
    return val;
}
/*caloc with memory error check*/
void *ecalloc(size_t nitems, size_t size, char *errmsg){
    void *val = calloc(nitems, size);
    if(val == NULL){
        fprintf(stderr, "\n%s\n", errmsg);
        exit(12);
    }
    return val;
}
