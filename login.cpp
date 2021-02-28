#include<iostream>
#include<fstream>
#include<windows.h>
using namespace std;
// hrdd
class login{
    protected:
    int readid,wcoun=0,radmin;
    string username,pass,rusername,rpass,rfname,rlname;
public:
    void logins();
    void gomain();
};
void login::logins()

{
    SetColor(22);
    int logc1=0,logc2=0;
    gotoxy(17,6);
    for(int down=0;down<16;down++){
        cout<<"\xb0";
        Sleep(20);
    }
      SetColor(28);
    char logins[10]= {' ','L','O','G','I','N',' '};
    for(int down=0;down<7;down++)
    {
        cout<<logins[down];
        Sleep(50);
    }
      SetColor(22);
    for(int down=0;down<16;down++){
        cout<<"\xb0";
        Sleep(20);
    }
    while(true)
    {
        wcoun++;
          SetColor(22);
        gotoxy(17,6);
         cout<<"\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0";SetColor(28);cout<<" LOGIN ";SetColor(22);cout<<"\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0";
        for(logc1=logc1;logc1<20;logc1++){
                SetColor(15);
        gotoxy(logc1,8);
        cout<<" Enter User Name :";
        Sleep(20+logc1*2);
        }
        gotoxy(19,8);
        cout<<" Enter User Name :";
        cin>>username;
        for(logc2=logc2;logc2<20;logc2++){
        gotoxy(logc2,10);
        cout<<" Enter Password  :";
        Sleep(20+logc2*2);
        }
        gotoxy(19,10);
        cout<<" Enter Password  :";
        SetColor(16);
        cin>>pass;
       // rname="isuru rajitha";
        fstream log("signup.txt",ios::in);
        while(log)
        {
            log>>readid>>rusername>>rpass>>rfname>>rlname>>radmin;

            if(username==rusername && pass==rpass)
            {
                rmname=rfname+" "+rlname;
                atype=radmin;
                system("cls");

            for(int con=0; con<25; con++)
            {
                gotoxy(20,5);

                cout<<"loading**\n";


                gotoxy(20+con,6);
                    cout<<"\xdb";
                    //loading(2);
                for(int cop=0;cop<=4;cop++){

                gotoxy(21+con,6);
                //Sleep(30);
                cout<<" "<<(con*4)+cop<<" %";
                if((con*4)+cop>98)
                {
                    system("color A");
                     gotoxy(33,8);
                    cout<<"Finalization      ";
                    Sleep(250);
                }
                else if((con*4)+cop>90)
                {
                    system("color 3");
                     gotoxy(33,8);
                    cout<<"data processing   ";
                    Sleep(50);
                }
                else if((con*4)+cop>80)
                {
                    system("color 9");
                     gotoxy(33,8);
                    cout<<" file extracting   ";
                    Sleep(100);
                }
                else if((con*4)+cop>60)
                {
                    system("color E");
                    gotoxy(33,8);
                    cout<<" data Base loading  ";
                     Sleep(30);

                }

                else
                {
                    system("color 4");
                    gotoxy(33,8);
                    cout<<" Creating Files     ";
                    Sleep(10);
                }

                }


            }

                system("cls");
                MainMenu();
            }

        }
        system("cls");
        if(wcoun%3==0){
        int xt=30*(wcoun/3);


                for(int rv=xt; rv>=0; rv--)
                {

                    gotoxy(20,8);
                    if(rv !=15)
                    {
                       SetColor(rv+1);
                    }

                    cout<<"Try again in "<<rv<<" seconds";
                    Sleep(1000);
                    system("cls");
                }

            }
            else
            {
                Beep(700,300);
                gotoxy(20,12);
                SetColor(16);

                //MessageBeep(MB_ICONWARNING);
                for(int cl=0; cl<2; cl++)
                {

                    system("color c0");
                    Sleep(100);
                    system("color 01");
                    system("color 7");
                    Sleep(50);
                }
                system("cls");
                SetColor(28);
                gotoxy(20,8);
                cout<<"User name or password is wrong please try again";
                Sleep(1000);
                system("cls");
            }
        }

    }


