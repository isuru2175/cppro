#include<iostream>
#include<windows.h>
using namespace std;

class About
{
public:
    About();
};
About :: About()
{
    for(int down=0;down<40;down++){
             Sleep(300);
if(down<20){
    gotoxy(30,20-down);
        cout<<"           Groups Members          ";
gotoxy(30,21-down);
    cout<<"                                   ";
}
else
        system("cls");
    if(down>3 && down<20)
    {
        gotoxy(30,20-(down-3));
        cout<<"Achintha Ekanayake  CODCSD 172P-010"<<endl;
    gotoxy(30,21-(down-3));
        cout<<"                                   ";
    }

    if(down>5 &&(down-5)<20)
    {
         gotoxy(30,20-(down-5));
        cout<<"Isuru Rajitha        CODSE 172P-010"<<endl;
    gotoxy(30,21-(down-5));
        cout<<"                                   ";
    }
    if(down>7&&(down-7)<20)
    {
         gotoxy(30,20-(down-7));
        cout<<"Lahiru Dilshan       CODSE 172P-005"<<endl;
    gotoxy(30,21-(down-7));
        cout<<"                                   ";
    }
     if(down>10&&(down-10)<20)
    {
         gotoxy(30,20-(down-10));
        cout<<"         Special Thanks !!         "<<endl;
    gotoxy(30,21-(down-10));
        cout<<"                                   ";
    }
    if(down>12&&down-12<20)
    {
         gotoxy(30,20-(down-12));
        cout<<"       Thisara Weerasinghe        "<<endl;
    gotoxy(30,21-(down-12));
        cout<<"                                   ";
    }

    if(down>15 &&down-15<20)
    {
         gotoxy(30,20-(down-15));
        cout<<"         Software Version          "<<endl;
    gotoxy(30,21-(down-15));
        cout<<"                                   ";
    }

    if(down>17 &&down-17<20)
    {
         gotoxy(30,20-(down-17));
        cout<<"              1.3.1V               "<<endl;
    gotoxy(30,21-(down-17));
        cout<<"                                   ";
    }
    if(down==39)
    {
        MainMenu ab;
    }
    }

    }

