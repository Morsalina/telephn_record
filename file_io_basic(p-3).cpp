#include<bits/stdc++.h>
#include<fstream>
#include<iostream>
#include<string>
using namespace std;

class record
{
public:
    string address;
    char name[20];
    int phn_num;
    void get_info(void);
    void show_info(void);
    void store_record(void);
    void view_record(void);
    void search_record(char *);
};


void record::get_info(void)
{
    cout<<"Name: ";
    cin.ignore();
    cin.getline(name,19);
    cout<<"Address: ";
    cin>>address;
    cout<<"Phone number: ";
    cin>>phn_num;
}

void record::show_info(void)
{
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Phone number: "<<phn_num<<endl;
    cout<<endl;

}
void record::store_record(void)
{
    //to store records , first i will be needing to open a text file
    ofstream fout;
    fout.open("record.txt",ios::app|ios::binary);//done with text file
    //to write in the file
    fout.write((char*)this,sizeof(*this));
    fout.close();
}
void record::view_record(void)
{
    //to view records need to read through the file
    ifstream fin;
    fin.open("record.txt",ios::in| ios::binary);
    //to read the data
    fin.read((char*)this,sizeof(*this));//this is a caller object=>r
    while(!fin.eof())
    {
        show_info();
        fin.read((char*)this,sizeof(*this));
    }
    fin.close();

}
void record::search_record(char *s)
{
    //to search first need to open a file
    ifstream fin;
    fin.open("record.txt",ios::in|ios::binary);
    if(!fin)
    {
        cout<<"There is no such file\n";
    }
    else
    {
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            if(!strcmp(s,name)){
                cout<<endl;show_info();}

            fin.read((char*)this,sizeof(*this));
        }
        /*if(fin.eof() && strcmp(s,name))
          cout<<"Sorry ,No such name"<<endl;*/
        fin.close();
    }
}
int main()
{
    int n;
    char ch,s[20];
    record r;
    while(true)
    {
        cout<<endl;
        cout<<"Press 1 to add phone number."<<endl
            <<"Press 2 to search a record."<<endl
            <<"Press 3 to view all the records."<<endl
            <<"Press 0 to exit ."<<endl;
            cout<<endl;
        cin>>n;
        if(n==1)
        {
            while(true)
            {
                r.get_info();
                r.store_record();
                cout<<"You number has been successfully added"<<endl;
                cout<<"Want to add another number? y/n :";
                cin>>ch;
                if(ch=='y')
                    continue;
                else if(ch=='n')
                    break;
            }
        }

        else if(n==2)
        {
            while(true)
            {
                cout<<"Which name you want to search?"<<endl;
                cin.ignore();
                cin.getline(s,19);
                r.search_record(s);
                cout<<"Do you want to search another name ? y/n :";
                cin>>ch;
                if(ch=='y')
                    continue;
                else if(ch=='n')
                    break;
            }
        }
        else if(n==3)
        {
            r.view_record();
        }
        else if(n==0)
        {
            exit(0);
        }
    }


}
