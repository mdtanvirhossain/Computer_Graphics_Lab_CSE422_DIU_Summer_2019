#include<conio.h>
#include <graphics.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   //text output
   outtextxy(60,100,"Color");
   outtextxy(120,210,"0");
   outtextxy(145,210,"1");
   outtextxy(170,210,"2");
   outtextxy(195,210,"3");
   outtextxy(145,210,"0");
   outtextxy(145,210,"0");
   outtextxy(145,210,"0");
   outtextxy(145,210,"0");
   outtextxy(145,210,"0");
   outtextxy(145,210,"0");
   outtextxy(145,210,"0");
   outtextxy(145,210,"0");
   outtextxy(145,210,"0");
   outtextxy(145,210,"0");
   outtextxy(145,210,"0");

    line(100,200,100,10);
    line(100,200,600,200);

    //setcolor(GREEN);
    setfillstyle(SOLID_FILL,0);//black
    bar(110,55,130,200);
    //setcolor(YELLOW);
    setfillstyle(SOLID_FILL,1);//blue
    bar(140,55,160,200);
    //setcolor(RED);
    setfillstyle(SOLID_FILL,2);//GREEn
    bar(170,55,190,200);

    setfillstyle(SOLID_FILL,3);//cyan
    bar(200,55,220,200);

    setfillstyle(SOLID_FILL,4);//red
    bar(230,55,250,200);

    setfillstyle(SOLID_FILL,5);//Magenda
    bar(260,55,280,200);

    setfillstyle(SOLID_FILL,6);//brown
    bar(290,55,310,200);

    setfillstyle(SOLID_FILL,7);//light-gray
    bar(320,55,340,200);

    setfillstyle(SOLID_FILL,8);//dark gray
    bar(350,55,370,200);

    setfillstyle(SOLID_FILL,9);//light-blue
    bar(380,55,400,200);

    setfillstyle(SOLID_FILL,10);//light-green
    bar(410,55,430,200);

    setfillstyle(SOLID_FILL,11);//light-cyan
    bar(440,55,460,200);

    setfillstyle(SOLID_FILL,12);//light-red
    bar(470,55,490,200);

    setfillstyle(SOLID_FILL,13);//light-magenda
    bar(500,55,520,200);

    setfillstyle(SOLID_FILL,14);//yellow
    bar(530,55,550,200);

    setfillstyle(SOLID_FILL,15);//white
    bar(530,55,550,200);



   getch();
   closegraph();
   return 0;
}

