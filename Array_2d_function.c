#include<stdio.h>
int  n=0,m=0;
void print (int (*b)[n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",*(*(b+i)+j));
        }printf("\n");
    }
}
int main()
{
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",(*(a+i)+j));
        }
    }print(a);
}
