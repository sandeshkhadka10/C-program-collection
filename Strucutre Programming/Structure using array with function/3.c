//program to arrange the marks in desceding order from structure with function
#include<stdio.h>
struct student
{
	char name[50];
	char faculty[50];
	char email[50];
	int age;
	int marksC;
};
void top(struct student [],int);
int main()
{
	int i=0,n=0;
	printf("Enter the number you want: ");
	scanf("%d",&n);
	struct student e[100];
	printf("Enter the details of the employee:\n");
	for(i=0;i<=n-1;i++)
	{
		fflush(stdin);
		printf("Enter the name for %d student: ",i+1);
		gets(e[i].name);
		printf("Enter the faculty: ");
		gets(e[i].faculty);
		printf("Enter the email: ");
		gets(e[i].email);
		printf("Enter the age: ");
		scanf("%d",&e[i].age);
		printf("Enter the marks in c-programming: ");
		scanf("%d",&e[i].marksC);
	}
	top(e,n);
	return 0;
}
void top(struct student s[], int num)
{
	struct student temp;
	int i=0,j=0;
	for(i=0;i<=num-1;i++)
	{
		for(j=i+1;j<=num-1;j++)
		{
			if(s[i].marksC < s[j].marksC)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("The highest marks of top 3 students are:\n");
	for(i=0;i<=2;i++)
	{
		printf("Name=%s\n",s[i].name);
		printf("Faculty=%s\n",s[i].faculty);
		printf("Email=%s\n",s[i].email);
		printf("Age=%d\n",s[i].age);
		printf("Marks=%d\n",s[i].marksC);
	}
}
