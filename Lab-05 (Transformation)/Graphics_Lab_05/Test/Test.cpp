#include <graphics.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
	//initilizing graphic driver and
	//graphic mode variable
	int graphicdriver=DETECT,graphicmode;
	int i;

	//calling initgraph function with
	//certain parameters
	initgraph(&graphicdriver,&graphicmode,"c:\\turboc3\\bgi");

	//Printing message for user
	settextstyle(BOLD_FONT,HORIZ_DIR,2);
	outtextxy(10, 10 + 10, "Rainbow");

	//initilizing max x and y
	int  mx = getmaxx()/2;
	int  my = getmaxy()/2+100;
	int  maxr = 300;
	int radius = 265;

	for(i = radius; i <= maxr; i++){
        if(i>=265 && i<270){
            setcolor(1);
        }
        else if(i>270 && i<275){
            setcolor(2);
        }
        else if(i>275 && i<280){
            setcolor(3);
        }
        else if(i>280 && i<285){
            setcolor(4);
        }
        else if(i>285 && i<290){
            setcolor(5);
        }
        else if(i>290 && i<295){
            setcolor(6);
        }
        else if(i>295 && i<300){
            setcolor(7);
        }
        arc(mx,my,0,180,i);
	}

	getch();
	closegraph();
	return 0;
}
