/*pattern programming of
LLLLL
AAAA
PPP
EE
N */

#include<stdio.h>
int main()
{
	int i=0,j=0;
	char x[6]="NEPAL";
	for(i=4;i>=0;i--)
	{
		for(j=i;j>=0;j--)
		{
			printf("%c",x[i]);
		}
		printf("\n");
	}
	return 0;
}
