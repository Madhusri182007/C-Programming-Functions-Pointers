#include<stdio.h>
void sum(int a,int b)
{
    int C=a+b;
    printf("%d",C);
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    sum(x,y);
}
