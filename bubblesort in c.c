#include<stdio.h>

 int main()

{

	int i,j;

	int m;

	printf("enter the number or the size of an array");

	scanf("%d",&m);

	int a[m];

	printf("enter the elements");

	for(i=0;i<m;i++)

	scanf("%d",&a[i]);
for(i=0;i<m;i++)
{
	for(j=i;j<m;j++)
		{
       if(a[i]<a[j])
	   {
       	int t=a[i];
       	a[i]=a[j];
       	a[j]=t;
	   }
		}

	for(i=0;i<m;i++)

	printf("%d",a[i]);

	
}
	

}
