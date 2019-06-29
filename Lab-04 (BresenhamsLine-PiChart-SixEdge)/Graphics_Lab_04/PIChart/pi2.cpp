#include <graphics.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
	//initilizing graphic driver and
	//graphic mode variable
	int graphicdriver=DETECT,graphicmode;

	//calling initgraph function with
	//certain parameters
	initgraph(&graphicdriver,&graphicmode,"c:\\turboc3\\bgi");

	//Printing message for user
	settextstyle(BOLD_FONT,HORIZ_DIR,2);
	outtextxy(10, 10 + 10, "Program to draw a pie chart in C graphics");

	//initilizing max x and y
	int  mx = getmaxx()/2;
	int  my = getmaxy()/2;

	//setting fill style in  pie slices
	setfillstyle(1,YELLOW);
	pieslice(mx, my, 0, 75, 100);


	setfillstyle(1,GREEN);
	pieslice(mx, my, 75, 225, 100);


	setfillstyle(1,BLUE);
	pieslice(mx, my, 225, 340, 100);

	setfillstyle(1,RED);
	pieslice(mx, my, 340, 360, 100);

	getch();
	closegraph();
	return 0;
}

