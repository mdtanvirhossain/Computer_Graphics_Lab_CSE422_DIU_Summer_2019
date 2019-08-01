#include<stdio.h>
#include<conio.h>
#include <graphics.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   int cx = getmaxx()/2;
   int cy = getmaxy()/2;

    //change color
   setcolor(7);
   //arc(100,200,270,90,360);


   //setcolor(13);
   setfillstyle(1,YELLOW);
   pieslice(-100,200,230,90,350);
   //for chnage color
   setcolor(7);
   arc(-100,200,230,90,351);






   //setcolor(12);
   setfillstyle(1,12);
   pieslice(-100,100,230,90,400);
   //chnage color
   setcolor(7);
   arc(-100,100,300,90,401);



   settextstyle(1,0,7);
   //outtextxy(100,100,"EID");
   setbkcolor(12);
   setcolor(YELLOW);
   outtextxy(50,170,"Eid");
   settextstyle(1,0,4);
   outtextxy(40,230,"Mubarak");

   //moon
   setcolor(WHITE);
   setfillstyle(1,WHITE);
   arc(170,35,160,330,70);
   arc(170,35,165,325,69);
   arc(170,35,170,320,68);
   arc(170,35,175,315,67);
   arc(170,35,180,310,66);
   arc(170,35,185,305,65);
   arc(170,35,190,300,64);
   arc(170,35,195,295,63);
   arc(170,35,200,290,62);
   arc(170,35,205,285,61);
   arc(170,35,210,280,60);

   settextstyle(1,0,5);
   outtextxy(140,40,"*");
   //floodfill(130,90,WHITE);

   //
   setcolor(RED);
   setfillstyle(1,RED);
   arc(130,250,0,180,110);
   line(20,250,35,150);
   line(35,150,130,100);

   line(240,250,225,150);
   line(225,150,130,100);
   floodfill(130,110,RED);

   //flower in 1st part
   //setcolor(YELLOW);
   //setfillstyle(1,RED);
   //circle(100,340,20);
   //floodfill(100,340,YELLOW);

    //setfillstyle(1,YELLOW);
   //circle(70,340,20);

   //floodfill(70,340,YELLOW);

   //floodfill(300,300,WHITE);

   setcolor(7);
   setfillstyle(1,3);
   line(280,1,638,1);
   line(638,1,638,477);
   line(638,477,100,477);
   floodfill(300,10,7);

   //mosque
   setfillstyle(1,YELLOW);
   bar(400,200,550,350);
   setcolor(RED);
   setfillstyle(1,WHITE);
   line(450,350,500,350);
   line(450,270,450,350);
   line(500,350,500,270);
   line(450,270,475,250);
   line(500,270,475,250);
   floodfill(455,300,RED);

   //gombud
   setcolor(BLACK);
   setfillstyle(1,WHITE);
   pieslice(475,200,0,180,75);
   line(475,50,500,130);
   line(475,50,450,130);
   floodfill(475,100,BLACK);

   //2nd
   setcolor(BLACK);
   setfillstyle(1,4);
   bar(560,200,600,350);
   bar(565,100,595,200);
   setcolor(5);
   setfillstyle(1,WHITE);
   line(565,100,580,5);
   line(595,100,580,5);
   line(565,100,595,100);
   floodfill(577,90,5);

   //3rd
   setfillstyle(1,RED);
   bar(350,200,390,350);
   bar(355,100,385,200);
   setfillstyle(1,WHITE);
   setcolor(BLACK);
   line(355,100,370,5);
   line(385,100,370,5);
   line(355,100,385,100);
   floodfill(377,90,BLACK);

   int i;


   setcolor(WHITE);
   setbkcolor(3);
    settextstyle(1,0,1);
   //setbkcolor(10);
   outtextxy(300,2,"*");
   setcolor(YELLOW);
   outtextxy(310,20,"*");
   setcolor(WHITE);
   outtextxy(315,40,"*");
   setcolor(YELLOW);
   outtextxy(315,60,"*");
   setcolor(WHITE);
   outtextxy(315,80,"*");
   setcolor(YELLOW);
   outtextxy(315,100,"*");
   setcolor(WHITE);
   outtextxy(315,120,"*");
   setcolor(YELLOW);
   outtextxy(310,140,"*");
   setcolor(WHITE);
   outtextxy(310,160,"*");
   setcolor(YELLOW);
   outtextxy(305,180,"*");
   setcolor(WHITE);
   outtextxy(300,200,"*");
   setcolor(YELLOW);
   outtextxy(295,220,"*");
   setcolor(WHITE);
   outtextxy(285,240,"*");
   setcolor(YELLOW);
   outtextxy(280,260,"*");
   setcolor(WHITE);
   outtextxy(270,280,"*");
   setcolor(YELLOW);
   outtextxy(255,300,"*");
   setcolor(WHITE);
   outtextxy(235,320,"*");
   setcolor(YELLOW);
   outtextxy(230,340,"*");
   setcolor(WHITE);
   outtextxy(220,360,"*");
   setcolor(YELLOW);
   outtextxy(205,380,"*");
   setcolor(WHITE);
   outtextxy(190,400,"*");
   setcolor(YELLOW);
   outtextxy(170,420,"*");
   setcolor(WHITE);
   outtextxy(150,440,"*");
   setcolor(YELLOW);
   outtextxy(130,460,"*");

   outtextxy(280,400,"May You be Blessed with");
   outtextxy(235,430,"Peace on Eid-ul-Adha and always");


   getch();
   closegraph();
   return 0;
}

