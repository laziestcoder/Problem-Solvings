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


int main()
{
	int gdriver = DETECT, gmode;
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
	int xmin=20,ymin=20,xmax=200,ymax=200;
	rectangle(xmin,ymin,xmax,ymax);
	int x=50,y=50;
	putpixel(x,y,4);
	if(xmin<=x && x<=xmax && ymin<=y && y<=ymax)
		printf("Visible");
	else
		printf("Not Visible");

	getch();
	closegraph();


	return 0;
}