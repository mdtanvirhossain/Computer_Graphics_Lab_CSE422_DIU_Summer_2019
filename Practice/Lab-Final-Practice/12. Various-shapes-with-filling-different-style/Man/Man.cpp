#include<stdio.h>
#include<conio.h>
#include <graphics.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   //outtext
   //outtextxy(200,60,"Please Smile..");

    //getting the middle of the screen
   int cx1 = getmaxx()/2;
   //printf("%d",cx1);

   //setcolor(RED);
   //setfillstyle(SOLID_FILL,YELLOW);
   circle(cx1,80,50);
   //floodfill(cx1,80,YELLOW);

   //setcolor(BLACK);
   //setfillstyle(SOLID_FILL,BLACK);
   circle(cx1-20,70,7);
   //floodfill(190,150,BLACK);

   //setcolor(BLACK);
   //setfillstyle(SOLID_FILL,BLACK);
   circle(cx1+20,70,7);
   //floodfill(310,150,BLACK);


   //setcolor(BLACK);
   //setfillstyle(SOLID_FILL,BLACK);
   arc(cx1,88,200,340,25);
   arc(cx1,80,220,320,30);
   //floodfill(250,286,BLACK);*/


   //neck
    //line(cx1,130,cx1,200);
    line(cx1-15,125,cx1-15,150);

    line(cx1+15,125,cx1+15,150);

    arc(cx1,140,215,325,20);
    arc(cx1,145,200,340,20);

    //
    line(cx1-15,150,cx1-70,160);
    line(cx1+15,150,cx1+70,160);


    //jama
    line(cx1-35,155,cx1-35,290);
    line(cx1,163,cx1,295);
    line(cx1+35,155,cx1+35,290);



    //right neck
    line(cx1+70,160,cx1+70,270);
    line(cx1-70,160,cx1-70,270);

    //right hand
    line(cx1+70,160,cx1+150,220);
    line(cx1+150,220,cx1+70,290);
    line(cx1+70,210,cx1+110,225);
    line(cx1+110,225,cx1+70,260);

    //left hand
    line(cx1-70,160,cx1-150,220);
    line(cx1-150,220,cx1-70,290);
    line(cx1-70,210,cx1-110,225);
    line(cx1-110,225,cx1-70,260);

    //t-shirt bottom
    arc(cx1,195,225,315,100);
    arc(cx1,200,225,315,100);


    //left leg
    line(cx1-70,270,cx1-80,420);
    line(cx1,330,cx1-40,420);
    line(cx1-40,420,cx1-40,440);

    line(cx1-80,420,cx1-120,430);
    line(cx1-120,430,cx1-120,440);

    line(cx1-120,440,cx1-40,440);

    //right leg
    line(cx1+70,270,cx1+80,420);
    line(cx1,330,cx1+40,420);
    line(cx1+40,420,cx1+40,440);
    line(cx1+80,420,cx1+120,430);
    line(cx1+120,430,cx1+120,440);
    line(cx1+120,440,cx1+40,440);


   getch();
   closegraph();
   return 0;
}
