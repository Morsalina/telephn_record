//so i will be using OOP
//and graphics and file i/o
#include<bits/stdc++.h>
#include<graphics.h>
#include<ctime>
#include<stdlib.h>
#include<dos.h>
//#include<iomanip.h>
//#include<ciostream>
//#include<cfstream>
using namespace std;

class Record
{
public:
    string name,address;
    int phn_num;
    void get_info(void);
    void show_info(void);
};

void Record::get_info(void)
{
    cout<<"Enter your name :";
    cin>>name;
    cout<<"Enter your address:";
    cin>>address;
    cout<<"Now enter your phone number that will be available :";
    cin>>phn_num;

}
void Record::show_info(void)
{
    cout<<"name: "<<name<<endl;
    cout<<"address: "<<address<<endl;
    cout<<"Phone number: "<<phn_num<<endl;
}

int main()
{
    Record r;
    r.get_info();
    r.show_info();

    //initializing graphics
    int gd=DETECT,gm,errorcode;
    initgraph(&gd,&gm,"");
    errorcode=graphresult();//putting graph result into an error code
    if(errorcode !=grOk)//if any error occurs
    {
        cout<<"Graphics error."<<endl<<grapherrormsg(errorcode);
        cout<<"Press any number to halt"<<endl;
        getch();
        exit(1);
        closegraph();
    }

y:
    char *pass="RPV";//need to know about this
    char *ppass;
//    gotoxy(25,8);
   settextstyle(6,0,5);//(x,y,z)=>x=z=>font italic ,y=>position of y axis
    setbkcolor(BLUE);
    setcolor(WHITE);
    outtextxy(180,50,"WELCOME");
    setcolor(WHITE);
    settextstyle(6,0,5);
    outtextxy(280,100,"TO");//(x,y,text)=>x,y=position of the text
    setfillstyle(1,DARKGRAY);
    outtextxy(80,150,"TELEPHONE BOOK");

    getch();//it is mandatory
    clearviewport();
    settextstyle(3,0,4);
    settextstyle(7,0,4);
    getch();
    clearviewport();

g:
    cout<<"Enter your password:";
    cin>>ppass;
    if(strcmp(pass,ppass)!=0)
    {
        cout<<"\n\t\t Incorrect password"<<endl;
        cout<<"\t Try again"<<endl;
        getchar();
        goto g;
    }
    else{

     Record r1;
     string name,name1;
     int i;
     //clrscr();
     setbkcolor(BLUE);
     setcolor(YELLOW);
     closegraph();

    }

z:
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    setcolor(BLUE);
    rectangle(60,10,600,400);
    setfillstyle(1,YELLOW);
    bar(61,11,599,399);
    outtextxy(299,30,"HELP-> PRESS ANY KEY 1~6");
    outtextxy(220,50,"1. TO ADD ");
    setcolor(BLUE);

    outtextxy(220,100,"2. TO SHOW ");
    setcolor(BLUE);

    outtextxy(220,150,"3. TO SEARCH ");
    setcolor(BLUE);

    outtextxy(220,200,"4. TO MODIFY ");
    setcolor(BLUE);

    outtextxy(220,250,"5. TO DELETE ");
    setcolor(BLUE);

    outtextxy(220,300,"6. TO EXIT ");
    setcolor(BLUE);

    outtextxy(220,350,"Enter the choice:");
    setcolor(BLUE);
    int i;
    cin>>i;
    switch(i)
    {
    case 1:
        //clrscr();
        fstream f;

    }



}

