/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<graphics.h>
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#define PI 2*acos(0)

int main(){

	int h,k,i,x[10],y[10];
	float deg,rad,xnew[10],ynew[10];
	closegraph();
	int gdriver = DETECT, gmode;
	initgraph(&gdriver, &gmode,"C:\\TC\\BGI");
	int x1,y1,x2,y2;
	freopen("input_3.txt", "r+", stdin);
	for(i=0;i<3;i++)
		cin>>x[i]>>y[i];
	/*h=(x[0]+x[2])/2;
	k=(y[0]+y[2])/2;*/
	h=5;
	k=2;
	int sx=2;
	int sy=2;
	for(i=0;i<3;i++){
		xnew[i]=x[i]*sx-sx*h+h;
		ynew[i]=y[i]*sy-sy*k+k;
	}
	for(i=0;i<2;i++){
		line(x[i],y[i],x[i+1],y[i+1]);
		line(xnew[i],ynew[i],xnew[i+1],ynew[i+1]);
	}
	line(x[0],y[0],x[2],y[2]);
	line(xnew[0],ynew[0],xnew[2],ynew[2]);
	return 0;
}