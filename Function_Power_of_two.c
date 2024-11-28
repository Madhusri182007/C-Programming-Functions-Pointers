#include<stdio.h>
void power(int a,int b)
{
    int p=1;
    for(int i=1;i<=b;i++)
    {
        p=p*a;
    }
    printf("Power of %d and %d :%d",a,b,p);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    power(a,b);
}
