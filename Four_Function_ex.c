#include<stdio.h>
int Sum(int a,int b)
{
    int C=a+b;
    return C;
}
void Difference(int a,int b)
{
    int C=a-b;
    printf("Difference:%d\n",C);
}
int Product()
{
    int a,b;
    printf("Enter numbers to product:");
    scanf("%d %d",&a,&b);
    int C=a*b;
    return C;
}
void Quotient()
{
    int a,b;
    printf("Enter two numbers to quotient:");
    scanf("%d %d",&a,&b);
    int C=a/b;
    printf("Quotient:%d\n",C);
}
int main()
{
    int x,y;
    printf("Enter two numbers to sum and difference:");
    scanf("%d %d",&x,&y);
    int c=Sum(x,y);
    printf("Sum:%d\n",c);
    Difference(x,y);
    int C=Product();
    printf("Product:%d\n",C);
    Quotient();
}
