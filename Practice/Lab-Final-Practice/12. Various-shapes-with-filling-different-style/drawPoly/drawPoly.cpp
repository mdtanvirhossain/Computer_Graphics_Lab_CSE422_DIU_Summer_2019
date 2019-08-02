// C Implementation for drawpoly()
#include <graphics.h>

// driver code
int main()
{
	// gm is Graphics mode which is
	// a computer display mode that
	// generates image using pixels.
	// DETECT is a macro defined in
	// "graphics.h" header file
	int gd = DETECT, gm;

	// coordinates of polygon
	int arr[] = {320, 150, 400, 250,
				250, 350, 320, 150};

	// initgraph initializes the
	// graphics system by loading a
	// graphics driver from disk
	initgraph(&gd, &gm, "");

	// drawpoly function
	outtext("draw different types of shape");
	drawpoly(4, arr);

	getch();

	// closegraph function closes the
	// graphics mode and deallocates
	// all memory allocated by
	// graphics system .
	closegraph();

	return 0;
}
