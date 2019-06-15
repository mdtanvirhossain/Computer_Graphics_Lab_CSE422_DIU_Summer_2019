#include<conio.h>
#include <graphics.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   /*Bar Chart */
   //outtext
   outtextxy(150,220,"BAR CHART");
    //brittochap
    //arc(200,200,0,70,50);

    line(100,50,100,200);
    line(100,200,300,200);

    //setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    bar(110,55,150,200);
    //setcolor(YELLOW);
    setfillstyle(SOLID_FILL,RED);
    bar(170,95,210,200);
    //setcolor(RED);
    setfillstyle(SOLID_FILL,YELLOW);//HATCH_FILL,LINE_FILL
    bar(230,135,270,200);

   getch();
   closegraph();
   return 0;
}

