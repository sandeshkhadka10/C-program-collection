//program to input the time through the structure
#include<stdio.h>
struct time_struct
{
	int hour;
	int minute;
	int second;
};
int main()
{
	struct time_struct time;
	printf("Enter the number in hour: ");
	scanf("%d",&time.hour);
	
	printf("Enter the number in minute: ");
	scanf("%d",&time.minute);
	
	printf("Enter the number in second: ");
	scanf("%d",&time.second);
	
	printf("%d:%d:%d",time.hour,time.minute,time.second);
	return 0;
}
