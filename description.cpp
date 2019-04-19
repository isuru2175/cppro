#include<iostream>
#include<fstream>>
#include<iomanip>
using namespace std;
class description{
    int did=0;string des,rdes;float price,rprice;
    char con;

public:
    description();
};
description::description()
{
    SetColor(29);
    gotoxy(17,2);
    for(int down=0;down<30;down++){
        cout<<"\xb0";
        Sleep(20);
    }
     SetColor(22);
    char logins[25]= {' ','A','D','D',' ','D','E','S','C','R','I','P','T','I','O','N',' '};
    for(int down=0;down<17;down++)
    {
        cout<<logins[down];
        Sleep(50);
    }
    SetColor(29);
    for(int down=0;down<30;down++){
        cout<<"\xb0";
        Sleep(20);
    }
  //  system("cls");
   //  gotoxy(17,2);
  //  cout<<"\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0 ADD DESCRIPTION \xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0";

    fstream desc("description.txt",ios::app);
    fstream rdesc("description.txt",ios::in);
    while(rdesc){
        rdesc>>did>>rdes>>rprice;
    }
    while(true)
    {
        system("cls");
        SetColor(29);
     gotoxy(17,2);
    cout<<"\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0";SetColor(22);cout<<" ADD DESCRIPTION ";SetColor(29);cout<<"\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0";
    SetColor(15);
        gotoxy(20,5);
    cout<<"Description ID          :"<<++did;
    gotoxy(20,6);
    cout<<"Enter Description       :";cin>>des;

if(des=="0")
    MainMenu ab;
    int y=0;
        while (true){
             gotoxy(20,7);
      cout<<"Enter Description price :";
        cin.clear();
        if(y!=0){while(cin.get() != '\n');}
        y++;
        cin>>price;
        if (!cin.fail()){
           break;
        }
         gotoxy(45,7);
          cout<<"Invalid Input";
         Sleep(500);
         gotoxy(45,7);
         cout<<"             ";


    }
    fstream desc("description.txt",ios::app);
    desc<<setw(5)<<did<<setw(20)<<des<<setw(8)<<price<<endl;

    gotoxy(20,9);
    cout<<"Do You Want To Main Menu(y/n) :";cin>>con;
    if(con=='y')
        MainMenu ab;

    }
}
