#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    printf("a=%d ,a[0]=%d\n",*a,a[0]);
    printf("a+1=%d ,a[1]=%d\n",*a+1,a[1]);
    printf("a+2=%d ,a[2]=%d\n",*a+2,a[2]);
    printf("a+3=%d ,a[3]=%d\n",*a+3,a[4]);
    printf("a+4=%d ,a[4]=%d\n",*a+4,a[4]);
    printf("a=%p,a[0]=%p\n",a,&a[0]);
    printf("a+1=%p ,a[1]=%p\n",a+1,&a[1]);
    printf("a+2=%p ,a[2]=%p\n",a+2,&a[2]);
    printf("a+3=%p ,a[3]=%p\n",a+3,&a[4]);
    printf("a+4=%p ,a[4]=%p\n",a+4,&a[4]);
}
