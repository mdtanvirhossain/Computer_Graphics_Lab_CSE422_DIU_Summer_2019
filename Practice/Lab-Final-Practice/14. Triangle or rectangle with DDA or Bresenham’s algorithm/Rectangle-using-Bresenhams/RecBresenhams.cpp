#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void bresenhams_line(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;

	dx=x1-x0;
	dy=y1-y0;

	x=x0;
	y=y0;

	p=2*dy-dx;

	while(x<x1)
	{
		if(p>=0)
		{
			putpixel(x,y,7);
			y=y+1;
			p=p+2*dy-2*dx;
		}
		else
		{
			putpixel(x,y,7);
			p=p+2*dy;
		}
		x=x+1;
		delay(10);
	}
}

int main()
{
	int gdriver=DETECT, gmode, error, x1, y1, x2, y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8;
	initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");

	printf("Enter the value of x1 and y1 : ");
	scanf("%d%d", &x1, &y1);
	printf("Enter the value of x2 and y2 : ");
	scanf("%d%d", &x2, &y2);

	printf("Enter the value of x3 and y3 : ");
	scanf("%d%d", &x3, &y3);
	printf("Enter the value of x4 and y4 : ");
	scanf("%d%d", &x4, &y4);

	printf("Enter the value of x5 and y5 : ");
	scanf("%d%d", &x5, &y5);
	printf("Enter the value of x6 and y6 : ");
	scanf("%d%d", &x6, &y6);

	printf("Enter the value of x7 and y7 : ");
	scanf("%d%d", &x7, &y7);
	printf("Enter the value of x8 and y8 : ");
	scanf("%d%d", &x8, &y8);




	bresenhams_line(x1, y1, x2, y2);
	bresenhams_line(x3, y3, x4, y4);
	bresenhams_line(x5, y5, x6, y6);
	bresenhams_line(x7, y7, x8, y8);


    getch();
    closegraph();
	return 0;
}


