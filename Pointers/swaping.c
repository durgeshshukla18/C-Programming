#include<stdio.h>
void swap(int* x,int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main()
{
    int a;
    int b;
    printf("enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("The swaped values are:a=%d,b=%d",a,b);
    return 0;
}