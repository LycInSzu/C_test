#include "alloc.h"
void main(){
  int *new_memory;
  new_memory=MALLOC(25,int);
  /*new_memory=1;
  for(int m=0;m<25;m++){
    new_memory++=m+1;
  }
  printf("the first int num of new memory is : ",*new_memory);
*/
printf("the first int num of new memory is : ",*(new_memory);
}
