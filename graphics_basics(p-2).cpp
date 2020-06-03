#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"");
    ellipse(250,200,0,360,50,80);
    line(250,200,300,200);
    line(200,200,200,100);
    line(200,200,250,200);
    ellipse(300,200,0,360,50,80);
    getch();
    closegraph();
}
