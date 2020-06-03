//incomplete
//search does not work
//gonna use class (file_io_basic(p-3)

#include<bits/stdc++.h>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    int a;
    cout<<"Press 1 to add number."<<endl
        <<"Press 2 to search a number."<<endl;
    cin>>a;

    fstream fout,fin;
    string name,address,search_name;
    int phn_no;
    char ch;
    if(a==1)
    {
        fout.open("record.txt",ios::app);
        while(fout)
        {
            cout<<"name: "<<endl;
            cin>>name;
            cout<<"Address: "<<endl;
            cin>>address;
            cout<<"Phone number: "<<endl;
            cin>>phn_no;

            fout<<name<<" "<<address<<" "<<phn_no<<endl;

            cout<<"Add another? y/n"<<endl;
            cin>>ch;
            if(ch=='y')
                continue;

            else if(ch=='n')
                break;

        }
    }
    fout.close();

    if(a==2)
    {
        cout<<"Which name you want to search? :"<<endl;
        cin>>search_name;
        fin.open("record.txt");
        while(fin)
        {
            if(name==search_name)
            {
                getline(fin,name);
                cout<<name<<" "<<address<<" "<<phn_no<<endl;

            }
        }
        fin.close();

    }
}
