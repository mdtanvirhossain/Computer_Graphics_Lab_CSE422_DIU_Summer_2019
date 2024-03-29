// A C program to make a rainbow. This program would only
// work in Turbo C compiler in DOS compatible machine
#include<stdio.h>
#include<graphics.h>;
#include<dos.h>;
#include<conio.h>

// function for making of rainbow
void rainbow()
{
	// auto detection
	int gdriver = DETECT,gmode;
	int x, y, i;

	// initialize graphics mode(passed three arguments to
	// initgraph function)
	// &gdriver is the address of gdriver variable, &gmode is
	// the address of gmode and
	// "C:\\Turboc3\\BGI" is the directory path where BGI files are stored
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");

	x = getmaxx() / 2;//finding centre x-ordinate of screen
	y = getmaxy() / 2;//finding centre y-ordinate of screen

	for (i=30; i<200; i++)
	{
		// delay function under dos.h for holding the
		// function for some time
		delay(10);

		// selecting color for making of rainbow
		setcolor(i/10);

		// making of arc with fixed centre and increasing radius
		arc(x, y, 0, 180, i-10);
	}
}
// driver program
int main()
{
	rainbow();

	getch();
    closegraph();
	return 0;
}
