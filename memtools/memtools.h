/*******************************************************************
 Author: Chris Ranc
 memtools.h : v0.1
 license : GPL v2.0

    Framework for memory realted tools to do error checking for
 when allocating or reallocating memory.  

********************************************************************/
#include <stdlib.h>

#ifndef _MEMTOOLS_
#define _MEMTOOLS_

/*malloc with memory error check*/
void *emalloc(size_t size, char *errmsg);

/*realloc with memory error check*/
void *erealloc(void *ptr, size_t size, char *errmsg);

/*calloc with memory error check*/
void *ecalloc(size_t nitems, size_t size, char *errmsg);

#endif
