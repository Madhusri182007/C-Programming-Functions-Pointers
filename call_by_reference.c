#include<stdio.h>
void dummy(int *n)
{
    printf("Before changing dummy:%d\n",*n);
    *n=10;
    printf("After changing dummy:%d\n",*n);
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("Befor changing main:%d\n",a);
    dummy(&a);
    printf("After changing main:%d\n",a);
}
