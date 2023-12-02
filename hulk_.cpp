#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	char str[100]="I hate ";
	char str1[100]="I love ";
	for(i=1;i<=n;i++)
	{
		if(i%2!=0&&i!=n)
		{
			printf("%s that ",str);
		}
		else if(i%2==0&&i!=n)
		{
			printf("%s that ",str1);
		}
		if(i%2!=0&&i==n)
		{
			printf("%s it ",str);
		}
		else if(i%2==0&&i==n)
		{
			printf("%s it ",str1);
		}		
		
	}
}
