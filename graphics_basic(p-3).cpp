#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    //gotoxy(25,8);
    settextstyle(6,0,5);//(x,y,z)=>x=z=>font italic ,y=>position of y axis
    setbkcolor(BLUE);
    setcolor(WHITE);
    outtextxy(180,50,"WELCOME");
    setcolor(WHITE);
    settextstyle(6,0,5);
    outtextxy(280,100,"TO");//(x,y,text)=>x,y=position of the text
    setfillstyle(1,DARKGRAY);
    outtextxy(80,150,"TELEPHONE BOOK");
    char *pass="PRV";
    getch();//it is mandatory
}
