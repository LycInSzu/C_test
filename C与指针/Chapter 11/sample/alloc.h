#include <stdlib.h>
#define  malloc      no_malloc
#define MALLOC(num,type)  (type *)alloc((num)*sizeof(type))
extern  void * alloc(size_t size);
