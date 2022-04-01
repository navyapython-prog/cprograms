/* compute two values*/
#include <stdio.h>
int main()
{
	float a,b,sum,pro,quo,dif;
	printf("enter two values\n");
	scanf("%f%f",&a,&b);
	sum=a+b;
	dif=a-b;
	pro=a*b;
	quo=a/b;
	printf("sum=%f\ndifference=%f\nproduct%f\nquotient=%f",sum,dif,pro,quo);
	return 0;
	}
