#include <iostream>
#include <graphics.h>
using namespace std;


int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);

    setcolor(3);               //BLUE
    rectangle(10,10,630,470);
    setcolor(9);              //RED
    rectangle(5,5,635,475);
    
    while(kbhit()==0)          //Condition for no key in buffer memory
    {
        for(int i=80;i>=0;i-=20)
        {
            setcolor(8);         //GREY fans outer rings
            circle(320,100,65);
            circle(320,100,70);
            
            setfillstyle(SOLID_FILL,13);      //pink stand bar
            bar(310,100,330,360);
            
            setfillstyle(SOLID_FILL,6);		// bottom bar
            bar(290,360,350,375);
						
            setcolor(2);
            setfillstyle(SOLID_FILL,10);
            pieslice(320,100,i,i+40,60);		// for the blades
            pieslice(320,100,i+120,i+160,60);
            pieslice(320,100,i+240,i+280,60);
            
            setcolor(4);
            circle(320,100,10);
            setfillstyle(SOLID_FILL,12);			// for the blades small circle
            floodfill(320,100,4);
            delay(100);
            
         	setcolor(0);
        	setfillstyle(SOLID_FILL,0);					// 0 is imp
        	pieslice(320,100,i,i+40,60);				// for animation of fans
        	pieslice(320,100,i+120,i+160,60);
        	pieslice(320,100,i+240,i+280,60);
		}
	}
    getch();
    closegraph();
}
