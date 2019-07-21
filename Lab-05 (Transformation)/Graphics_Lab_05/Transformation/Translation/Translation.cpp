#include<stdio.h>
#include<conio.h>
#include <graphics.h>

int main()
{
   int gd = DETECT, gm;
   int x1,y1,x2,y2;
   int x3,y3,x4,y4;
   int tx1,ty1,tx2,ty2;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   //outtext
   outtextxy(200,60,"Translation");

   //int cx = getmaxx()/2;
   //int cy = getmaxy()/2;

   scanf("%d %d %d %d",&x1,&y1, &x2, &y2);

   line(x1,y1,x2,y2);

   printf("Enter new coordinate: ");
   scanf("%d %d %d %d",&x3,&y3, &x4, &y4);

   tx1 = x3-x1;
   ty1 = y3-y1;
   tx2 = x4-x2;
   ty2 = y4-y2;

   line(x1+tx1,y1+ty1,x2+tx2,y2+ty2);






   getch();
   closegraph();
   return 0;
}
