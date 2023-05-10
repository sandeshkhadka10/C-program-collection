#include<stdio.h>
#include<stdlib.h>
int main()
{
	char x[50];
	FILE *p;
	p=fopen("D:\\abc.txt","r+"); 
	if(p==NULL)
	{
		printf("File doesnot exist");
		exit(0);

	}
	fseek(p,8,SEEK_SET); 
	fseek(p,-3,SEEK_CUR);
	fgets(x,50,p);
	printf("%s",x);
	fclose(p);
	return(0);
}

