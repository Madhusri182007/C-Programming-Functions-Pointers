#include<stdio.h>
void print(int a[5])
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
    print(a);
}
