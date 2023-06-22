//program to find the students whose marks is greater than 40 using file handling
#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[50];
	int roll_no;
	int mark;
};
int main()
{
	FILE *p;
	struct student s;
    p=fopen("D:\\abc.txt","rb");
	if(p==NULL)
	{
		printf("File doesnot exist");
		exit(0);
	}
	while(fread(&s,sizeof(struct student),1,p)==1)
	{
		if(s.mark>=40)
		{
			printf("The name of the student is %s\n",s.name);
			printf("The roll no is %d\n",s.roll_no);
			printf("The marks is %d\n",s.mark);
		}
	}
	fclose(p);
	return 0;
}
