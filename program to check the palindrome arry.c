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
	int ar[m];
	for(i=0;i<m;i++)
	ar[i]=a[i];
		for(j=0;j<=c;j++)
		{
	        int t=a[j];
			a[j]=a[c];
			a[c]=t;
			c--;
		}
		int flag=1;
	for(i=0;i<m;i++)
	{
		if(ar[i]!=a[i])
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	printf("the array is not palindrome");
	else
	printf("the array is palindrome");
	 return 0;
}
