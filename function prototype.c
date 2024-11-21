#include<stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int res=factorial(n);
    printf("Factorial:%d",res);
}
int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
        }
    return f;
}
