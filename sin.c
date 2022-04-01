#include<stdio.h>
#include<math.h>
#define PI 3.142857
int main()
{
	float x,num,den,sum,term,deg;
	int i;
	printf("enter degree:\n");
	scanf("%f",&deg);
	x=deg*(PI/180.0);
	i=1;
	num=x;
	den=1.0;
	term=x;
	sum=x;
	 do
	 {
		i=i+2;
		num=-num*x*x;
		den=i*(i-1)*den;
		term=num/den;
		sum=sum+term;
	 }while(fabs(term)>=0.00001); 
	printf("inbuilt funtion sin(%.2f)=%.2f\n",deg,sin(x));
	printf("user defined sin(%.2f)=%.2f\n",deg,sum);
	return 0;
} 
