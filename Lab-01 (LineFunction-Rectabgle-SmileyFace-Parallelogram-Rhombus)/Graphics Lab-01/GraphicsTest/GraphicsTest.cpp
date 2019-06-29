
/* Sample program to draw a circle*/
#include<graphics.h>
#include<conio.h>
main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TC\\BGI"); /* initialization of graphic mode */
  //setting color
  setcolor(GREEN);
  circle(150,150,100);
  getch();
  closegraph(); /* Restore orignal screen mode */
}
/* End of program */
