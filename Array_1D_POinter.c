#include<stdio.h>
int n;
void print(int *a)
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d",*(a+i));
    }
}
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    print((int *)a);
}
