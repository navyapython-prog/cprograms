#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	float sum,mean,sd,var=0;
	float a[50];
	float *ptr;
	ptr=a;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	printf("enter %d number of elements into the array\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%f",ptr);
		ptr++;
	}
	sum=0;
	ptr=a;
	for(i=0;i<n;i++)
	{
		sum=sum+*ptr;
		ptr++;
	}
	mean=sum/n;
	printf("mean = %.2f\n",mean);
	ptr=a;
	for(i=0;i<n;i++)
	{
		var=var+pow((*ptr-mean),2);
		ptr++;
	}
	var=var/n;
	sd=sqrt(var);
	printf("variance=%.2f\n and standard deviation=%.2f\n",var,sd);
return 0;
}	
	
		
