#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

int shape(){
    int choice;
    printf("Your option >> ");
    printf("\n1. Line\n2. Traingle\n3. Rectangle");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice){
    case 1:
        printf("\nLine >>");
        return 1;
        break;
    case 2:
        printf("\nTriangle");
        break;
    case 3:
        printf("\nRectangle");
        break;
    default:
        printf("Wrong Choice !");
        break;
    }
}

void translateLine ( int P[][2], int T[])
{
    // drawing original line using graphics functions
    setcolor (2);
    line(P[0][0], P[0][1], P[1][0], P[1][1]);

    // calculating translated coordinates
    P[0][0] = P[0][0] + T[0];
    P[0][1] = P[0][1] + T[1];
    P[1][0] = P[1][0] + T[0];
    P[1][1] = P[1][1] + T[1];

    // drawing translated line using graphics functions
    setcolor(3);
    line(P[0][0], P[0][1], P[1][0], P[1][1]);
}

int main()
{
   int gd = DETECT, gm;
   int x,y,i;
   int choice;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   x = getmaxx()/2;
   y = getmaxy()/2;

   printf(">>>>>>>>>>>>>  2D Transformation  >>>>>>>>>>>>>");
   printf("\nYour Option >> ");
   printf("\n1. Translation\n2. Scaling\n3. Rotation ");

   printf("\nPlease enter your choice: ");
   scanf("%d", &choice);

   switch(choice){
    case 1:
        printf("\nTransformation >> \n");
        if(shape() == 1){
            int P[2][2] = {5, 8, 12, 18}; // coordinates of point
            int T[] = {2, 1}; // translation factor
            translateLine (P, T);
        }
        break;
    case 2:
        printf("\nScaling");
        break;
    case 3:
        printf("\nRotation");
        break;
    default:
        printf("Wrong Choice");
        break;
   }

   getch();
   closegraph();
   return 0;
}


