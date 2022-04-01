#include<stdio.h>
#define MAX 20
int main()
{
	int a[MAX];
	int i,j,temp,n,first,last,mid,key;
	int c,p=0;
	printf("enter the size:");
	scanf("%d",&n);
	printf("enter the %d integers:",n);
	for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	for(i=0;i<n-1;i++)
		
		{
		for(j=0;j<n-1-i;j++)
			{
			if(a[j]>a[j+1])
				{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				}
			c=c+1;
			}
		p=p+1;
		printf("the no of comparisons per %d pass is %d\n",i+1,j);
		}
	for(i=0;i<n;i++)
		{
		printf("%d \n",a[i]);
		}
	printf("no of comparators=%d\n",c);
	printf("no ofpasses=%d\n",p);
	printf("enter key elements");
	scanf("%d",&key);
	first=0;
	last=n-1;
	while(first<=last)
		{
		mid=(first+last)/2;
		if(key==a[mid])
			{
			printf("%d is found at %d\n", key, mid);
			return 1;
			}
		else if(key<a[mid])
			{
			last=mid-1;
			}
		else
			{
			first=mid+1;
			}
		}
		printf("%d is not found\n",key);
	return 0;
}	
			
	

