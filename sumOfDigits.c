#include<stdio.h>
int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	int temp;
	int sum=0;
	while(n>0)
	{
	  	temp=n%10;
	  	sum+=temp;
	  	n=n/10;
	}

	printf("sum of the number  %d",sum);
}
