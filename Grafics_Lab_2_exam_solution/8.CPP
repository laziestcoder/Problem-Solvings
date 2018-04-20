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

	int gdriver = DETECT, gmode;
	initgraph(&gdriver, &gmode,"C:\\TC\\BGI");
	int h=getmaxx()/2;
	int k=getmaxy()/2;
	circle(h,k,90);
	circle(h,k,85);
	line(h,k,h,k-83);
	line(h,k,h+83,k);
	getch();
	closegraph();
	return 0;
}