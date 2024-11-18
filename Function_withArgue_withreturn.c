#include<stdio.h>
int sum(int x,int y)
{
    int C=x+y;
    return C;
}
int main()
{
    int a,b,C;
    scanf("%d %d",&a,&b);
    C=sum(a,b);
    printf("%d",C);
}
