# C-tools/memtools
Adds checking for failed memory allocation or reallocation and prints an 
erro message of your choosing

function names and parrameters
------------------------------
```c
void *emalloc(size_t size, char *errmsg)

void *erealloc(void *ptr, size_t size, char *errmsg)

void *ecalloc(size_t nitems, size_t size, char*errmsg)
```