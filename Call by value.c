#include<stdio.h>
void dummy(int n)
{
    printf("Before changing dummy:%d\n",n);
    n=10;
    printf("After changing dummy:%d\n",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("Befor changing main:%d\n",n);
    dummy(n);
    printf("After changing main:%d\n",n);
}
