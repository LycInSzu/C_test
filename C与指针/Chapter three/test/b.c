/*
链接属性的意思到底是什么？该怎么使用？
这里的a和b会取什么值？与a.c和c.c中的值有关吗？
要把a.c b.c c.c 链接到一起才起作用？
怎么链接到一起？
*/

int a;
int b;
void main(void){
printf("b.c : a is %d \n",a);
printf("b.c :b is %d \n",b);
a=1;
b=3;
printf("b.c :a+b is %d \n",a+b);
}
