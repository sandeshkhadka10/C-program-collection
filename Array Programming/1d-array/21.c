//program to check whether both strings are identical or not
#include <stdio.h>

int main()
{
	char x[100], y[100];
	int i = 0;

	printf("Enter the 1st string: ");
	scanf("%s", x);

	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] >= 'A' && x[i] <= 'Z')
		{
			x[i] = x[i] + 32;
		}
	}

	printf("The string in lowercase is %s\n", x);

	printf("Enter the 2nd string: ");
	scanf("%s", y);

	for (i = 0; y[i] != '\0'; i++)
	{
		if (y[i] >= 'A' && y[i] <= 'Z')
		{
			y[i] = y[i] + 32;
		}
	}

	printf("The string in lowercase is %s\n", y);

	for (i = 0; x[i] != '\0' || y[i] != '\0'; i++)
	{
		if (x[i] == y[i])
		{
			continue;
		}
		else
		{
			break;
		}
	}

	if (x[i] == '\0' && y[i] == '\0')
	{
		printf("Both strings are identical\n");
	}
	else
	{
		printf("Both strings are not identical\n");
	}

	return 0;
}

