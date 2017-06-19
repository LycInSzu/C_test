#include <stdio.h>
int a=3;
int b=5;
void main(void){
  int num =sizeof(int);
  printf("siezeof(int) is %d \n",num);
  num =sizeof(3);
  printf("siezeof(3) is %d \n",num);
  num =sizeof(a=b+27);
  printf("siezeof(a=b+27) is %d \n",num);
  char s[6]="hello";
  printf("siezeof(s[6]) is %d \n",sizeof(s));
  num =sizeof(char);
  printf("siezeof(char) is %d \n",num);
  num =sizeof(long);
  printf("siezeof(long) is %d \n",num);
  num =sizeof(short);
  printf("siezeof(short) is %d \n",num);
  num =sizeof(double);
  printf("siezeof(double) is %d \n",num);
  num =sizeof(float);
  printf("siezeof(float) is %d \n",num);
  printf("a.c : a is %d \n",a);
}
