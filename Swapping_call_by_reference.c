#include<stdio.h>
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    printf("After swapping in func:%d %d\n",*a,*b);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before swapping in main:%d %d\n",a,b);
    swap(&a,&b);
    printf("After swapping in main:%d %d\n",a,b);
}
