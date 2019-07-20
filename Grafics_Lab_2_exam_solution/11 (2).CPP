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
	int xmin=100,ymin=100,xmax=300,ymax=300;
	rectangle(xmin,ymin,xmax,ymax);
	int x1=10,y1=10,x2=100,y2=100;
	line(x1,y1,x2,y2);
	int flag=0;
	if(x1>xmax && x2>xmax && y1>ymax && y2>ymax){
		printf("Not Visible");
		flag=1;

	}
	if(x1<xmin && x2<xmin && y1<ymin && y2<ymin){
		printf("Not Visible");
		flag=1;
	}
	if(x1<=xmax && x2<=xmax && y1<=ymax && y2<=ymax){
		if(x1>=xmin && x2>=xmin && y1>=ymin && y2>=ymin){
			printf("Visible");
			flag=1;
		}
	}
	if(flag==0)
		printf("Clipping Candidate");

	getch();
	closegraph();


	return 0;
}