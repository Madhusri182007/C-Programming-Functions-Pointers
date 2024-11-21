#include<stdio.h>
int factorial()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    
    int res=factorial();
    printf("factorial:%d",res);
}
