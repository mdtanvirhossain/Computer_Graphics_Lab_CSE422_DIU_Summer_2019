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

	//for(r=maxr;r>=1;r--)//default
	for(r = 10 ; r < maxr ; r++)
	{
		//color selection
		if(r>0 && r<=40)//v
			setcolor(LIGHTBLUE);
		else if(r>40 && r<=80)//i
			setcolor(WHITE);
		else if(r>80 && r<=120)//b
			setcolor(BLUE);
		else if(r>120 && r<=160)//g
			setcolor(GREEN);
		else if(r>160 && r<=200)//y
			setcolor(YELLOW);
		else if(r>200 && r<=240)//o
			setcolor(LIGHTRED);
		else if(r>240 && r<=maxr)//r
			setcolor(RED);

		//draw arc
		arc(x,y,s_angle,e_angle,r);
		//delay b/w arcs
		delay(20);
	}
	getch();
	closegraph();
	return 0;
}
