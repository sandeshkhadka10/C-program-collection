/*program to print the pattern 
          NNNNN
          EEEE
          PPP
          AA
          L*/
#include<stdio.h>
int main()
{
	int i=0,j=0;
	char x[6]="NEPAL";
	for(i=0;i<=4;i++)
	{
		for(j=i;j<=4;j++)
		{
			printf("%c",x[i]);
		}
		printf("\n");
	}
	return 0;
}
