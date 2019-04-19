#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

class signupcus{

string fname,lname,email,rfname,rlname,remail;
int rid=0,tel,rtel;
char con;
public:
    signupcus();
};

signupcus::signupcus(){
    SetColor(22);
    gotoxy(17,2);
    for(int down=0;down<16;down++){
        cout<<"\xb0";
        Sleep(20);
    }
    SetColor(26);
   char logins[25]= {' ','C','U','T','O','M','E','R',' ','R','E','G','I','S','T','R','A','T','I','O','N',' '};
    for(int down=0;down<23;down++)
    {
        cout<<logins[down];
        Sleep(50);
    }
    SetColor(22);
    for(int down=0;down<16;down++)
        {
        cout<<"\xb0";
        Sleep(20);
        }
        system("cls");
        while(true)
{
    system("cls");
    SetColor(22);
    gotoxy(17,2);
    cout<<"\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0";SetColor(26);cout<<" CUSTOMER REGISTATION ";SetColor(22);cout<<"\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0";
    fstream rcus("customer.txt",ios::in);

while(rcus)
{
   rcus>>rid>>rfname>>rlname>>remail>>rtel;
}
SetColor(15);
    gotoxy(20,4);
cout<<"Customer Id            :"<<++rid;
    gotoxy(20,5);
cout<<"Enter First Name       :";cin>>fname;
if(fname=="0")
    MainMenu mu;
gotoxy(20,6);
cout<<"Enter Last Name        :";cin>>lname;
gotoxy(20,7);
cout<<"Enter Email Address    :";cin>>email;
int y=0;
while (true){
        gotoxy(20,8+y);
cout<<"Enter Telephone Number :";
        cin.clear();
        if(y!=0){while(cin.get() != '\n');}
        y++;
        cin >> tel;
        if (!cin.fail()){
           break;
        }
        gotoxy(20,9+y);
         cout<<"Invalid Telephone Number Please enter the Valid Number";
         y +=2;


    }


fstream savecus("customer.txt",ios::app);

savecus<<setw(5)<<rid<<setw(20)<<fname<<setw(20)<<lname<<setw(30)<<email<<setw(12)<<tel<<endl;
gotoxy(20,10+y);
cout<<"Do You Want to Continue (y/n)";cin>>con;
if(con !='y')
{
    system("cls");
    MainMenu ab;
}

}
}
