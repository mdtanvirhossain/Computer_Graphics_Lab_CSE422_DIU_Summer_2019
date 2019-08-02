#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <dos.h>
#include <conio.h>

void dda_line(int x1, int y1, int x2, int y2){

    float x,y,dx,dy,step;
    int i;

    dx=abs(x2-x1);
	dy=abs(y2-y1);

	if(dx>=dy)
		step=dx;
	else
		step=dy;

	dx=dx/step;
	dy=dy/step;

	x=x1;
	y=y1;

	i=1;
	while(i<=step)
	{
		putpixel(x,y,GREEN);
		x=x+dx;
		y=y+dy;
		i=i+1;
		delay(10);
	}
}

int main( )
{
	float x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8;
	int gd=DETECT,gm;

	initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	printf("Enter the value of x1 and y1 : ");
	scanf("%f%f",&x1,&y1);
	printf("Enter the value of x2 and y2: ");
	scanf("%f%f",&x2,&y2);
	dda_line(x1,y1,x2,y2);

	printf("Enter the value of x3 and y3 : ");
	scanf("%f%f",&x3,&y3);
	printf("Enter the value of x4 and y4: ");
	scanf("%f%f",&x4,&y4);
	dda_line(x3,y3,x4,y4);

	printf("Enter the value of x5 and y5 : ");
	scanf("%f%f",&x5,&y5);
	printf("Enter the value of x6 and y6: ");
	scanf("%f%f",&x6,&y6);
	dda_line(x5,y5,x6,y6);

	printf("Enter the value of x7 and y7 : ");
	scanf("%f%f",&x7,&y8);
	printf("Enter the value of x8 and y8: ");
	scanf("%f%f",&x8,&y8);
	dda_line(x7,y7,x8,y8);



    getch();
	closegraph();
}


