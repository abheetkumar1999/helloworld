#include<stdio.h>
 int main()
{
	int i,j;
	int m;
	printf("enter the number or the size if an array");
	scanf("%d",&m);
	int a[m];
	printf("enter the elements");
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	int c=m-1;
		for(j=0;j<=c;j++)
		{
	        int t=a[j];
			a[j]=a[c];
			a[c]=t;
			c--;
		}
	for(i=0;i<m;i++)
	printf("%d",a[i]);
	
	
}
