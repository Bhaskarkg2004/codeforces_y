#include<stdio.h>
int main()
{
	int n,x=0,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			x++;
		}
		else if(i==n)
		{
			--x;
		}
		else
		{
			x--;
		}
		
	}
	printf("%d",x);
	
}