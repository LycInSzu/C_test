int a=3;
int b=5;
int *c=&a;
void main(void){
  printf("location of a is %d \n",(long)(c));
  printf("a.c : a+b is %d \n",a+b);
}
