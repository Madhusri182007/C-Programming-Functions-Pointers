#include<stdio.h>
int main()
{
    float a=45.67;
    float *b=&a;
    printf("%p %p\n",&a,b);
    char c='m';
    char *d=&c;
    printf("%p %p\n",&c,d);
    
}
