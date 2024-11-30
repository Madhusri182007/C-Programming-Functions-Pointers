#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *b;
    
    b=(int*)malloc(sizeof(int));
    *b=10;
    printf("value:%d\n",*b);
    printf("Address:%p\n",b);
}
