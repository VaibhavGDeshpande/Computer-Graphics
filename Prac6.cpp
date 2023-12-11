#include<iostream>
#include<graphics.h>
#include<cmath>
using namespace std;


class Fractals
{
	public:
		void fract(int x1,int y1,int x5,int y5,int i)
		{
			
			if(i==0)
			{
				line(x1,y1,x5,y5);	
			}	
			else
			{
				int segx=(x5-x1)/3;
				int segy=(y5-y1)/3;
				int x2=x1+segx;
				int y2=y1+segy;
				int x4=x1+2*segx;
				int y4=y1+2*segy;
				int x3=(int)(0.5*(x1+x5)+sqrt(3)*(y1-y5)/6);
				int y3=(int)(0.5*(y1+y5)+sqrt(3)*(x5-x1)/6);
				fract(x1,y1,x2,y2,i-1);
				fract(x2,y2,x3,y3,i-1);
				fract(x3,y3,x4,y4,i-1);
				fract(x4,y4,x5,y5,i-1);
			}
		}	
};
int main()
{
	int gd=DETECT,gmode,error;
	initgraph(&gd,&gmode,NULL);
	Fractals f;
	int i;
	cin>>i;
	f.fract(150,20,20,280,i);
	f.fract(280,280,150,20,i);
	f.fract(20,280,280,280,i);
	getch();
	closegraph();
	
}