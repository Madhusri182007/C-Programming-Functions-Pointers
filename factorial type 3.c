#include<stdio.h>
void factorial(int n)
{
   
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
   printf("factorial:%d",f);
}
int main()
{
     int n;
    printf("Enter number:");
    scanf("%d",&n);
    factorial(n);
}
