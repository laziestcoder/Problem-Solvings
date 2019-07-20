/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include<conio.h>
#define MAX 20
#define TRUE 1
#define FALSE 0

const int INSIDE = 0; // 0000
const int LEFT = 1;   // 0001
const int RIGHT = 2;  // 0010
const int BOTTOM = 4; // 0100
const int TOP = 8;    // 1000
double xmin=100,ymin=100,xmax=300,ymax=300;

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

void cohen_sutherland (double x1, double y1, double x2, double y2)
{
    int accept;
    int done;
    int outcode1, outcode2;

    accept = FALSE;
    done = FALSE;

    outcode1 = compcode(x1,y1);
    outcode2 = compcode(x2,y2);
    do
    {
	if (outcode1 == 0 && outcode2 == 0)
	{
	    accept = TRUE;
	    done = TRUE;
	}
	else if (outcode1 & outcode2)
	{
	    done = TRUE;
	}
	else
	{
	    double x, y;
	    //int outcode_ex = outcode1 ? outcode1 : outcode2;
	    int outcode_ex;
	    if(outcode1!=0)
		outcode_ex=outcode1;
	    else
		outcode_ex=outcode2;

	    if (outcode_ex & TOP)
	    {
		x = x1 + (x2 - x1) * (ymax - y1) / (y2 - y1);
		y = ymax;
	    }

	    else if (outcode_ex & BOTTOM)
	    {
		x = x1 + (x2 - x1) * (ymin - y1) / (y2 - y1);
		y = ymin;
	    }
	    else if (outcode_ex & RIGHT)
	    {
		y = y1 + (y2 - y1) * (xmax - x1) / (x2 - x1);
		x = xmax;
	    }
	    else
	    {
		y = y1 + (y2 - y1) * (xmin - x1) / (x2 - x1);
		x = xmin;
	    }
	    if (outcode_ex == outcode1)
	    {
		x1 = x;
		y1 = y;
		outcode1 = compcode(x1,y1);
	    }
	    else
	    {
		x2 = x;
		y2 = y;
		outcode2 = compcode(x2,y2);
	    }
	}
    } while (done == FALSE);

    if (accept == TRUE)
	line (x1, y1, x2, y2);
}

int main()
{
	int gdriver = DETECT, gmode;
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
	int i;
	double x[10],y[10];
	x[0]=100;	y[0]=100;
	x[1]=200;	y[1]=200;
	x[2]=300;	y[2]=300;
	x[3]=300;	y[3]=400;
	x[4]=200;	y[4]=400;
	x[5]=x[0];	y[5]=y[0];
	rectangle(xmin,ymin,xmax,ymax);
	for (i=0;i<5;i++)
	{
		cohen_sutherland (x[i],y[i],x[i+1],y[i+1]);
	}
	getch();
	closegraph();
	return 0;
}



