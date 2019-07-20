/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<stdio.h>
#include<graphics.h>
#include<conio.h>

const int INSIDE = 0; // 0000
const int LEFT = 1;   // 0001
const int RIGHT = 2;  // 0010
const int BOTTOM = 4; // 0100
const int TOP = 8;    // 1000
int xmin=100,ymin=100,xmax=300,ymax=300;

int compcode(int x, int y)
{
	int code;

	code = INSIDE;          // initialised as being inside of clip window

	if (x < xmin)           // to the left of clip window
		code |= LEFT;
	else if (x > xmax)      // to the right of clip window
		code |= RIGHT;
	if (y < ymin)           // below the clip window
		code |= BOTTOM;
	else if (y > ymax)      // above the clip window
		code |= TOP;

	return code;
}


int main()
{
	int gdriver = DETECT, gmode;
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
	int x1=200,y1=200,x2=250,y2=250;
	rectangle(xmin,ymin,xmax,ymax);
	line(x1,y1,x2,y2);
	int cd1,cd2;
	cd1=compcode(x1,y1);
	cd2=compcode(x2,y2);
	if(cd1==0 && cd2==0)
		printf("Visible");
	else if(cd1&cd2==0)
		printf("Clipping candidate");
	else
		printf("Not visible");
	getch();
	closegraph();


	return 0;
}