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
	int i,c,x[10],y[10];
	x[0]=100;	y[0]=100;
	x[1]=200;	y[1]=200;
	x[2]=300;	y[2]=300;
	x[3]=300;	y[3]=400;
	x[4]=200;	y[4]=400;
	for(i=0;i<4;i++)
		line(x[i],y[i],x[i+1],y[i+1]);
	line(x[4],y[4],x[0],y[0]);

	int point_x=250,point_y=300;
	putpixel(point_x,point_y,4);
	x[5]=x[0];
	y[5]=y[0];

	for(i=0;i<5;i++){
		c=(x[i+1]-x[i])*(point_y-y[i])-(y[i+1]-y[i])*(point_x-x[i]);
		if(c<0){
			printf("The point is 0utside");
			break;
		}
	}
	if(c>5)
		printf("The point is inside");
	getch();
	closegraph();


	return 0;
}