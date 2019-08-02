#include<stdio.h>
#include<graphics.h>
int main()
{
	int maxx, maxy, s_angle, e_angle, i, r, x, y, gd, gm, maxr;

	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	maxx=getmaxx();
	maxy=getmaxy();
	s_angle=0;
	e_angle=180;
	x=maxx/2;
	//y=maxy-20;
	y = (maxy / 2) + 100;
	r=1;
	maxr=280;

	for(r = 140 ; r < maxr ; r++)
	{
		//color selection
		if(r>=140 && r<=160)//v
			setcolor(LIGHTBLUE);
		else if(r>160 && r<=180)//i
			setcolor(MAGENTA);
		else if(r>180 && r<=200)//b
			setcolor(BLUE);
		else if(r>200 && r<=220)//g
			setcolor(GREEN);
		else if(r>220 && r<=240)//y
			setcolor(YELLOW);
		else if(r>240 && r<=260)//o
			setcolor(LIGHTRED);
		else if(r>260 && r<=maxr)//r
			setcolor(RED);

		//draw arc
		arc(x,y,s_angle,e_angle,r);
		delay(10);
	}


	getch();
	closegraph();
	return 0;
}
