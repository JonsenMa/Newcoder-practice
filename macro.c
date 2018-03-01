/*
*这个简单的程序主要用来理解C语言中宏定义的概念
*宏定义其实就是简单的替换
*如本程序中定义的宏ADD(x) x*x的意思就是将程序中ADD(x)形式的代码一律替换看成x*x
*所以d=ADD(a+b)*c其实就是d = a+b*a+b*c = 4+6*4+6*7 = 70
*特别注意括号也算宏的一部分，要完完整整地替换
*/

#include <stdio.h>
#define ADD(x) x*x
main( )
{ 
  int a=4,b=6,c=7,d=ADD(a+b)*c;
  printf("d=%d",d);
}
