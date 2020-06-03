#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void draw_car(void)
{
    int i=0,gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    //code for body of the car
    while(true){
    for(i=0;i<=420;i=i+10)
    {
        line(100+i,100,200+i,100);
        line(100+i,50,200+i,50);

        line(100+i,100,100+i,50);
        line(200+i,100,200+i,50);
        line(200+i,100,250+i,100);
        line(250+i,100,250+i,75);
        line(200+i,50,250+i,75);
        circle(125+i,110,15);
        circle(210+i,110,15);
        setcolor(YELLOW);
        setbkcolor(RED);


         delay(20);
         cleardevice();
    }
    }

    getch();
    closegraph();
}
int main()
{
    draw_car();
}
