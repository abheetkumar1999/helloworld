#include<stdio.h>
main()
{
	int n,i,j,k;
	printf("enter the number or the size if an array");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements");
	
	for( i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	
	int b,c;
	
	printf("enter the position and the element to be inserted in an array");
	scanf("%d\n%d",&b,&c);
	int x=a[b];
		for(j=b;j<=n;j++)
		{	
			if(j==b)
			{
			a[j]=c;
		} 
		else
		{
			int t=a[j];
			a[j]=x;
			x=t;
		}
	}
    for(j=0;j<=n;j++)
	printf("\n%d\n",a[j]);	
}
