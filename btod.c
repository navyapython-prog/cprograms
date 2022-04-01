#include<stdio.h>
int btod(int);
int main()
{
int n,i;
int val;
printf("enter binary value\n");
scanf("%d",&n);
int rem,c=0;
int org;
org=n;
while(n>0)
	{
	rem=n%10;
	if(rem!=0&&rem!=1)
		{
			c=c+1;
			printf("enter a valid number\n");
			return 0;
		}
		n=n/10;
	}		
val= btod(org);
printf("%d\n",val);
return 0;
}
int btod(int bin)
{
	if(bin==0)
		{
		return 0;
		}
	else
		{
		return (bin%10+2*btod(bin/10));
		}
}


	
