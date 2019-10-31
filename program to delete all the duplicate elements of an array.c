#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter the number or the size if an array");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements");
	
	for( i=0;i<n;i++)
	scanf("%d",&a[i]);
	int t=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;)
		{
	if(a[i]==a[j])
	{
	for(k=j;k<n;k++)
	{
		a[k]=a[k+1];
	}
	n--;
	}
	else
	j++;
}
	}
for(j=0;j<n;j++)
	printf("\n%d\n",a[j]);	 
}
