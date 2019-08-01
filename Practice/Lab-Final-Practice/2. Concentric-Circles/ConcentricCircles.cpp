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
   outtextxy(250,60,"Concentric Circles");

   for(i = 10; i < 100; i+=10){
    setcolor(i/10);
    circle(x,y,i);
   }

   //2nd way
   //setcolor(0);
   //circle(x,y,10);
   //setcolor(1);
   //circle(x,y,20);
   //and so  on


   getch();
   closegraph();
   return 0;
}

