#include<stdio.h>
void main()
{
	int a,sum=0;
	printf("Enter the value of a:");
	scanf("%d",&a);
	if(a<1000)
	{
		for(int i=111;i<=a;i+=100)
		{
			sum+=i;
		}
	}
	printf("%d",&sum);
}