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
	int del;
	printf("enter the number to be deleted");
    scanf("%d",&del);
	for(i=0;i<n;i++)
	{
	while(del==a[i])
	{
    for(k=i;k<n;k++)
	{
		a[k]=a[k+1];
}	n--;

	}

}

for(j=0;j<n;j++)

	printf("\n%d\n",a[j]);	 

}
