#include<stdio.h>
int main()
{
    int a=10;
    int c=a;
    int *b;
    b=&a;
    a=12;
    printf("%d %d %d",a,*b,c);
    int *d;
    d=&a;
    printf("%p %p",&a,d);
}
