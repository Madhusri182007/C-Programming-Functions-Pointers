#include<stdio.h>
void print(int *a)
{
    printf("%d ",*((a+0)+0));
    printf("%d ",*((a+0)+1));
    printf("%d ",*((a+1)+1));
    printf("%d ",*((a+1)+2));
}
int main()
{
    int a[2][2]={{1,2},{3,4}};
    print((int *)a);
}
