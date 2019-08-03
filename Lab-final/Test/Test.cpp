#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
   int gd = DETECT, gm;
   int x,y,i;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   x = getmaxx()/2;
   y = getmaxy()/2;

   //outtext
   outtextxy(x-100,y,"Test Case");




   getch();
   closegraph();
   return 0;
}
