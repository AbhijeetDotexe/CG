/*

Submitted By  :-

Name: ABHIJEET RANA
Subject: Lab based on Computer Graphics 
Unique Paper Code (UPC): 32341602
Date of Examination: 12th May 2021
University Roll Number : 18013570001
Course: B.Sc (H) Computer Science
Semester : 6th  
*/

 
#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <dos.h>
 
void main( )
{
	float x,y,x1,y1,x2,y2,dx,dy,step;
	int i,gd=DETECT,gm;

	initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	cout<<"\n\t\tEnter the Coordinates of x1 and y1 : ";
	cin>>x1>>y1;
	cout<<"\t\tEnter the Coordinates of x2 and y2: ";
	cin>>x2>>y2;

	dx=abs(x2-x1);
	dy=abs(y2-y1);

	if(dx>=dy)
		step=dx;
	else
		step=dy;

	dx=dx/step;
	dy=dy/step;

	x=x1;
	y=y1;

	i=1;
	while(i<=step)
	{
		putpixel(x,y,5);
		x=x+dx;
		y=y+dy;
		i=i+1;
		//delay(100);
	}
	getch();
	closegraph();
}