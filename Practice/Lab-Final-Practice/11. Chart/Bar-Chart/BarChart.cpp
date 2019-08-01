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
   outtextxy(250,60,"Bar Chart");

   line(150,50,150,300);
   line(150,300,500,300);

   setfillstyle(1,RED);
   bar(170,150,210,300);
   setfillstyle(1,YELLOW);
   bar(230,120,270,300);
   setfillstyle(1,GREEN);
   bar(290,220,330,300);
   setfillstyle(1,BLUE);
   bar(350,50,390,300);


   getch();
   closegraph();
   return 0;
}


