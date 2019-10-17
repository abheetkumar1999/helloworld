#include <stdio.h>
int main()
{
	int i,j,k,a,b,c;
	int n;
	printf("enterthe no of alphabet which you want i pattern \n");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		char ch=65;
		for(j=n;j>=i;j--)
		{
		printf("%c ",ch);
		ch++;
		}
	
		for(k=1;k<i;k++)
		{
		printf("  ");
		}
			for(k=1;k<i;k++)
		{
		printf("  ");
		}
		for(j=n;j>=i;j--)
		{ch--;
		printf("%c ",ch);
		
		}
		printf("\n");
		
	}
		for(a=n;a>=1;a--)
	{
		char ch=65;
		for(b=n;b>=a;b--)
		{
		printf("%c ",ch);
		ch++;
	}
	
		for(c=1;c<a;c++)
		{
		printf("  ");
		}
			for(c=1;c<a;c++)
		{
		printf("  ");
		}
		for(b=n;b>=a;b--)
		{ch--;
		printf("%c ",ch);
		
		}
			printf("\n");
		
	}
	return 0;
}
