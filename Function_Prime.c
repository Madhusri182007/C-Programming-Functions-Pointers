#include<stdio.h>
int prime(int n)
{
    int i,p=0;;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            p=1;
            break;
        }
    }
    return p;
}
int main()
{
    int n;
    scanf("%d",&n);
    int res=prime(n);
    if(res==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }
}
