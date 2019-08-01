#include<stdio.h>
#include<conio.h>
#include <graphics.h>

int main()
{
   int gd = DETECT, gm;
   int x,y,i;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   x = getmaxx()/2;
   y = getmaxy()/2;

   //outtext
   outtextxy(250,60,"Pie Chart");

   setfillstyle(1,RED);
   pieslice(x,y,0,100,100);
   setfillstyle(1,YELLOW);
   pieslice(x,y,100,170,100);
   setfillstyle(1,GREEN);
   pieslice(x,y,170,330,100);
   setfillstyle(1,BLUE);
   pieslice(x,y,330,360,100);


   getch();
   closegraph();
   return 0;
}


