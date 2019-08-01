#include<stdio.h>
#include<conio.h>
#include <graphics.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   int cx = getmaxx()/2;
   int cy = getmaxy()/2;



   //left side
   setcolor(5);
   setfillstyle(1,5);
   line(0,0,202,0);
   line(0,0,0,479);
   line(0,479,202,479);
   arc(200,20,270,90,20);
   arc(200,60,270,90,20);
   arc(200,100,270,90,20);
   arc(200,140,270,90,20);
   arc(200,180,270,90,20);
   arc(200,220,270,90,20);
   arc(200,260,270,90,20);
   arc(200,300,270,90,20);
   arc(200,340,270,90,20);
   arc(200,380,270,90,20);
   arc(200,420,270,90,20);
   arc(200,460,270,90,20);
   floodfill(100,100,5);

   setcolor(WHITE);
   setfillstyle(1,WHITE);
   circle(101,150,40);
   line(101,210,67,170);
   line(101,210,134,170);
   line(101,210,101,260);

   floodfill(101,150,WHITE);
   floodfill(101,195,WHITE);

   //2nd balon
   circle(170,160,30);
   line(150,200,180,188);
   line(150,200,140,160);
   line(150,200,101,260);

   floodfill(170,160,WHITE);
   floodfill(170,190,WHITE);


   //3rd balon
   circle(60,200,25);
   line(80,230,85,200);
   line(80,230,50,222);
   line(80,230,101,260);

   floodfill(60,200,WHITE);
   floodfill(70,225,WHITE);

   setcolor(RED);
   setbkcolor(WHITE);
   outtextxy(101,150,"*");

   setbkcolor(5);
   setcolor(WHITE);
   settextstyle(8,0,5);
   outtextxy(50,240,"Happy");
   settextstyle(10,0,5);
   outtextxy(10,280,"Birthday");
   //end of leaft side
   /******************************************************/




   //right side
   setcolor(3);
   setfillstyle(1,3);
   line(202,0,638,0);
   line(638,479,638,0);
   line(202,479,638,479);
   arc(201,20,270,90,20);
   arc(201,60,270,90,20);
   arc(201,100,270,90,20);
   arc(201,140,270,90,20);
   arc(201,180,270,90,20);
   arc(201,220,270,90,20);
   arc(201,260,270,90,20);
   arc(201,300,270,90,20);
   arc(201,340,270,90,20);
   arc(201,380,270,90,20);
   arc(201,420,270,90,20);
   arc(201,460,270,90,20);
   floodfill(300,300,3);


   setcolor(RED);
   setfillstyle(1,RED);
   line(420,400,570,400);
   line(420,400,400,350);
   line(570,400,590,340);
   line(400,350,590,340);
   floodfill(450,360,RED);

   setcolor(12);
   setfillstyle(1,12);
   line(400,350,590,340);
   line(400,350,395,340);
   line(590,340,595,330);
   line(395,340,595,330);
   floodfill(400,345,12);

   setcolor(YELLOW);
   setfillstyle(1,YELLOW);
   line(395,340,390,320);
   line(595,330,600,305);
   line(390,320,600,305);
   line(595,330,395,340);
   floodfill(395,330,YELLOW);

   setcolor(11);
   setfillstyle(1,11);
   line(390,320,600,305);
   line(400,290,590,255);
   line(400,290,400,320);
   line(590,255,590,310);
   floodfill(500,300,11);


    //candle
   setcolor(RED);
   setfillstyle(3,RED);
   bar(490,100,510,200);
   line(500,100,500,90);

   setfillstyle(1,YELLOW);
   circle(500,80,10);
   line(500,50,495,70);
   line(500,50,505,70);
   floodfill(500,80,RED);
   floodfill(500,68,RED);

   //upper yellow
   setcolor(YELLOW);
   setfillstyle(1,YELLOW);
   line(400,290,590,255);
   line(420,290,420,180);
   line(570,260,570,200);
   line(570,200,420,180);
   floodfill(430,270,YELLOW);





   //right side end


   //2nd part balon
   setfillstyle(1,YELLOW);
   circle(320,350,40);
   line(280,400,340,385);
   line(280,400,281,340);
   floodfill(320,350,YELLOW);
   floodfill(290,380,YELLOW);
   line(280,400,270,500);

   setcolor(RED);
   setfillstyle(1,RED);
   circle(250,300,30);
   line(260,350,240,325);
   line(260,350,268,322);
   line(260,350,276,430);
   floodfill(250,300,RED);
   floodfill(255,335,RED);

   setbkcolor(3);
   settextstyle(10,0,5);
   setcolor(WHITE);
   outtextxy(250,20,"*");
   outtextxy(300,50,"*");
   outtextxy(400,110,"*");
   outtextxy(390,80,"*");

   outtextxy(300,150,"*");




   getch();
   closegraph();
   return 0;
}

