/* Sample program to draw a circle*/
#include<graphics.h>
#include<conio.h>
main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,""); /* initialization of graphic mode */
  //setting color
  setcolor(GREEN);
  line(10,100,100,100);
  line(100,10,100,100);
  line(100,10,10,10);
  line(10,100,10,10);
  getch();
  closegraph(); /* Restore orignal screen mode */
}
/* End of program */
