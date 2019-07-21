#include<stdio.h>
#include<conio.h>
#include <graphics.h>

int main()
{
   int gd = DETECT, gm;
   int x1,y1,x2,y2;
   int x3,y3,x4,y4;
   int tx1,ty1,tx2,ty2;
   int zoom_in,zoom_out;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   //outtext
   outtextxy(200,60,"Scaling");

   //int cx = getmaxx()/2;
   //int cy = getmaxy()/2;

   scanf("%d %d %d %d",&x1,&y1, &x2, &y2);

   line(x1,y1,x2,y2);

   printf("Enter new coordinate: ");
   //scanf("%d %d %d %d",&x3,&y3, &x4, &y4);

   //tx1 = x3-x1;
   //ty1 = y3-y1;
   //tx2 = x4-x2;
   //ty2 = y4-y2;

   //line(x1,y1,x2+x4,y2+y4);


    scanf("%d",&zoom_in);
    setcolor(YELLOW);
    line(x1-(zoom_in/2),y1,x2+zoom_in,y2+zoom_in);






   getch();
   closegraph();
   return 0;
}

