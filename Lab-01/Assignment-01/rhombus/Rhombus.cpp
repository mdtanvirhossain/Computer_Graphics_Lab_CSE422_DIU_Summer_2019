#include<graphics.h>
#include<conio.h>
main()
{
  int gd=DETECT,gm;

   /* initialization of graphic mode */
  initgraph(&gd,&gm,"C:\\TC\\BGI");

  //setting color
  setcolor(YELLOW);

  //bottom
  line(10,200,200,200);

  //right
  line(250,10,200,200);

  //top
  line(250,10,60,10);

  //left
  line(10,200,60,10);

  //naming
  setcolor(GREEN);
  outtextxy(50,210,"Rhombus");

  //naming-2
  setcolor(WHITE);
  outtextxy(300,400,"@md. tanvir hossain - 161-15-7157");

  getch();
  closegraph();/* Restore orignal screen mode */
}


