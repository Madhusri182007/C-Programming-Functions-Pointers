#include<stdio.h>
int n;
int arms()
{
    scanf("%d",&n);
    int t,t1,rem,C=0,P,Sum=0;
    t=n;
    t1=n;
   
    while(t1!=0)
    {
        rem=t1%10;
        C++;
        t1=t1/10;
    }
    do{
    rem=t%10;
    P=1;
    for(int i=1;i<=C;i++)
    {
        P=P*rem;
    }
    Sum=Sum+P;
    t=t/10;
   }while(t!=0);
   return Sum;
}
int main()
{
    int res=arms();
    if(res==n)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not armstrong");
    }
}
