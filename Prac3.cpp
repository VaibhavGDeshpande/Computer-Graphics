#include<iostream>
#include<graphics.h>
using namespace std;
void col(int x,int y,int b,int fill)
{
	int a=getpixel(x,y);
	if(a!=b && a!=fill)
	{
		putpixel(x,y,fill);
		col(x+1,y,b,fill);
		col(x-1,y,b,fill);
		col(x,y+1,b,fill);
		col(x,y-1,b,fill);
		
	}
}
int main()
{
	int gdriver= DETECT, gmode,error;
	initgraph(&gdriver,&gmode,NULL);
	
	rectangle(30,15,100,30);
	rectangle(50,40,80,30);
	rectangle(20,40,300,80);
	rectangle(240,80,300,120);
	rectangle(260,120,280,160);
	rectangle(200,160,340,250);
	
	delay(1000);
	col(270,140,WHITE,LIGHTBLUE);
	delay(1000);
	col(310,210,WHITE,LIGHTBLUE);
	
	getch();
	closegraph();
}