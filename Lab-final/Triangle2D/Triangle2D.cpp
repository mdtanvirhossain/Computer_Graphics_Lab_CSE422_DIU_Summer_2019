#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

int main()
{
   int x3,y3,x1,y1,x2,y2,sx,sy,ch;
   int i,gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   printf("Enter the value of 1st coordinate x1 and y1: ");
   scanf("%d%d", &x1,&y1);

   printf("Enter the value of 2nd coordinate x2 and y2: ");
   scanf("%d%d", &x2,&y2);

   printf("Enter the value of 3rd coordinate x3 and y3: ");
   scanf("%d%d", &x3,&y3);

   line(x1,y1,x2,y2);
   line(x2,y2,x3,y3);
   line(x1,y1,x3,y3);

   printf("Enter the value of scaling factor sx and sy : ");
   scanf("%d%d", &sx,&sy);

   printf("Your option >>\n1. Zoom In\n2. Zoom out");
   printf("\nEnter your choice: ");
   scanf("%d",&ch);
   switch(ch){
    case 1:
        cleardevice();
        setcolor(YELLOW);
        line(x1*sx,y1*sy,x2*sx,y2*sy);
        line(x2*sx,y2*sy,x3*sx,y3*sy);
        line(x1*sx,y1*sy,x3*sx,y3*sy);
        break;
    case 2:
        cleardevice();
        setcolor(YELLOW);
        x1 = abs(x1/sx);
        y1 = abs(y1/sy);
        x2 = abs(x2/sx);
        y2 = abs(y2/sy);
        x3 = abs(x3/sx);
        y3 = abs(y3/sy);

        line(x1,y1,x2,y2);
        line(x2,y2,x3,y3);
        line(x1,y1,x3,y3);
        break;
    default:
        printf("Wrong choice !");
        break;

   }

   getch();
   closegraph();
   return 0;
}

