#include<graphics.h>
#include<conio.h>
main()
{
  int gd=DETECT,gm;

   /* initialization of graphic mode */
  initgraph(&gd,&gm,"C:\\TC\\BGI");

  //setting color
  setcolor(GREEN);

  //bottom
  line(10,100,200,100);

  //right
  line(250,10,200,100);

  //top
  line(250,10,60,10);

  //left
  line(10,100,60,10);

  //naming
  setcolor(WHITE);
  outtextxy(50,110,"Parallelogram");

  getch();
  closegraph();/* Restore orignal screen mode */
}

