#include<stdio.h>
int main()
{
   float a=3.14;
   float *b=&a;
   printf("%p\n",b);
   b=b+1;
   printf("%p ",b);
}
