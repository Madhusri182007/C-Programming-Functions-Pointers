#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *b;
    int n;
    scanf("%d",&n);
    b=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",(b+i));
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(b+i));
    }
}
