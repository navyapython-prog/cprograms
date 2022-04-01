#include<stdio.h>
struct student
{
	int id;
	char name[50];
	float marks[6];
	float avg;
};
int main()
{
	struct student s[20];
	float sum=0;
	int i,j,n;
	printf("enter the no of records\n");
	scanf("%d",&n);
	printf("enter the student details\n");
		for(i=0;i<n;i++)
		{
		sum=0;
		printf("enter the id and name of the student\n");
		scanf("%d%s", &s[i].id, s[i].name);
		printf("enter the marks for each subject\n");
			for(j=0;j<6;j++)
			{
			scanf("%f",&s[i].marks[j]);
			sum=sum+s[i].marks[j];
			}
		s[i].avg=sum/6;
		}
	printf("students scoring above average marks....\n");
	printf("\n\nid\tname\taverage\n\n");
		for(i=0;i<n;i++)
		{
			if(s[i].avg>=35.0)
			{
			printf("%d\t%s\t%.2f\n",s[i].id,s[i].name,s[i].avg);
			}
		}
	printf("students scoring below average marks....\n");
	printf("\n\nid\tname\taverage\n\n");
		for(i=0;i<n;i++)
		{
			if(s[i].avg<35.0)
			{
			printf("%d\t%s\t%.2f\n",s[i].id,s[i].name,s[i].avg);
			}
		}	
	return 0;
}		
