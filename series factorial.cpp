#include<stdio.h>
int main()
{
	int n,i;
	int sum=0,fact=1;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
	{
		fact=fact*i;
		sum=sum+fact;
	}
	printf("%d",sum);
}

