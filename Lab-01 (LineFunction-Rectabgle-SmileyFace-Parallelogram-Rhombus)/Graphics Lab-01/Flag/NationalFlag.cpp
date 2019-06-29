
/* Sample program to draw a circle*/
#include<graphics.h>
#include<conio.h>
main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TC\\BGI"); /* initialization of graphic mode */

  setcolor(WHITE);
  outtextxy(200,100,"National Flag");

  /*int i,j;

	//loop for first area
	for(i=60;i<=120;i++)
	{
		for(j=60;j<=120;j++)
		{
			putpixel(j, i, RED);
		}
	}*/
	//setfillstyle(SOLID_FILL, YELLOW);
	//floodfill(300, 100, YELLOW);

	setcolor(GREEN);
	rectangle (100,200,500,400);
	//setfillstyle(SOLID_FILL, GREEN);
	//floodfill(10, 100, YELLOW);

	setcolor(RED);
	circle(300,300,60);


  getch();
  closegraph(); /* Restore orignal screen mode */
}
/* End of program */

