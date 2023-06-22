//program of graphics
#include <stdio.h>
#include <stdlib.h>
#include<graphics.h>
int main()
{
	int i=0,j=0;
	initwindow(1366,768);
	for(i=1;i<=1366;i+=8)
	{
	cleardevice();
	for(j=1;j<=8;j++)
	{
	
	setcolor(j);
    outtextxy(175+i,125,"RAM yatayat");
	rectangle(100+i,100,300+i,150);	
	line(100+i,150,350+i,150);
	line(100+i,150,100+i,250);
	line(150+i,250,100+i,250);
	line(350+i,250,350+i,150);
	line(300+i,250,350+i,250);
	line(200+i,250,250+i,250);
	circle(175+i,250,25);
	circle(275+i,250,25);
	line(0,275,1366,275);
}
	delay(50);	
	}	
		
	
	getch();
	return 0;
	
}
