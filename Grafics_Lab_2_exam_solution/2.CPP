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
	freopen("input_2.txt", "r+", stdin);
	cin>>x1>>y1>>x2>>y2;
	x[0]=x1;
	x[1]=x2;
	x[2]=x2;
	x[3]=x1;
	y[0]=y1;
	y[1]=y1;
	y[2]=y2;
	y[3]=y2;
	cin>>deg;
	rad=(deg*PI)/180;
	h=(x[0]+x[2])/2;
	k=(y[0]+y[2])/2;
	for(i=0;i<=3;i++){
		xnew[i]=x[i]*cos(rad)-y[i]*sin(rad)-h*cos(rad)+k*sin(rad)+h;
		ynew[i]=x[i]*sin(rad)+y[i]*cos(rad)-h*sin(rad)-k*cos(rad)+k;
	}
	for(i=0;i<3;i++){
		line(x[i],y[i],x[i+1],y[i+1]);
		line(xnew[i],ynew[i],xnew[i+1],ynew[i+1]);
	}
	line(x[0],y[0],x[3],y[3]);
	line(xnew[0],ynew[0],xnew[3],ynew[3]);
	return 0;
}