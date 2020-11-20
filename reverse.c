#include<stdio.h>
int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	int temp,rev=0;
	while(n>0)
	{
	temp=n%10;
	rev=rev*10+temp;
	n=n/10;
    }
	printf("Reverse of the number is %d",rev);
}
