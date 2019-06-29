/* Sample program to draw a circle*/
#include<graphics.h>
#include<conio.h>
main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TC\\BGI"); /* initialization of graphic mode */
  //setting color
  setcolor(GREEN);

  //bottom
  line(10,100,200,100);

  //right
  line(200,10,200,100);

  //top
  line(200,10,10,10);

  //left
  line(10,100,10,10);


  getch();
  closegraph(); /* Restore orignal screen mode */
}
/* End of program */
