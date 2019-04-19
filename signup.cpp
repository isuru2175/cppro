#include<iostream>
#include<fstream>
#include <iomanip>
using namespace std;
class signup
{
    string username,rusername,pass,rpass,pass1,fname,rfname,lname,rlname;
    char confirm;
    int id;int readid=0,admin,radmin;
public:
    signup();

};
signup::signup()
{
    SetColor(11);
    gotoxy(17,2);
    for(int down=0;down<25;down++){
        cout<<"\xb0";
        Sleep(20);
    }
     SetColor(21);
   char logins[25]= {' ','U','S','E','R',' ','S','I','G','N',' ','U','P',' '};
    for(int down=0;down<15;down++)
    {
        cout<<logins[down];
        Sleep(50);
    }
    SetColor(11);
    for(int down=0;down<25;down++)
        {
        cout<<"\xb0";
        Sleep(20);
        }


    fstream file("signup.txt",ios::app);
    fstream filein("signup.txt",ios::in);
    while(filein){filein>>readid>>rusername>>rpass>>rfname>>rlname>>radmin;}

while(true){
          system("cls");
        SetColor(11);
         gotoxy(17,2);
         cout<<"\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0";SetColor(21);cout<<" USER SIGN UP ";SetColor(11);cout<<"\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0";

         int co=0;
readid++;
SetColor(15);
gotoxy(20,4);
 cout<<"User Id            :"<<readid;

 while(true){
    gotoxy(20,6+co);
          SetColor(15);
 cout<<"Enter User Name    :";cin>>username;
 if(username=="0")
    MainMenu ab;
 co++;
 fstream filein1("signup.txt",ios::in);
 while(filein1){
        filein1>>readid>>rusername>>rpass>>rfname>>rlname>>radmin;
  if(rusername == username)
     {
       break;
     }
     }

if(rusername == username)
     {
         co++;
         gotoxy(20,6+co);
         SetColor(28);
        cout<<"User Name is Already used Please try again another name";
 co +=2;
     }
     else
        break;


 }


 gotoxy(20,7+co);
 SetColor(15);
 cout<<"Enter Password     :";SetColor(16);cin>>pass;
 while(true){

        gotoxy(20,8+co);
        SetColor(15);
 cout<<"Confirm Password   :";SetColor(16);cin>>pass1;
 if(pass==pass1){
    co=co+1;

    break;
 }
 else{
 gotoxy(20,9+co);
 co=co+2;
 }
  SetColor(28);
    cout<<"Password is Does not match !!";
 }
 SetColor(15);
 gotoxy(20,10+co);
 cout<<"Enter First Name   :";cin>>fname;
 gotoxy(20,11+co);
 cout<<"Enter Last Name    :";cin>>lname;
while(true)
{

int y=0;
while (true){
 gotoxy(20,12+co);
 cout<<"Create admin user to press 1 or Create Normal user to press 2 :";
        cin.clear();
        if(y!=0){while(cin.get() != '\n');}
        y++;
       cin>>admin;
        if (!cin.fail()){
           break;
        }
        gotoxy(83,12+co);
         cout<<"Invalid Input";
         Sleep(500);
           gotoxy(83,12+co);
         cout<<"             ";
         y +=2;


    }
 if(admin ==1 || admin ==2)
 {
       break;

 }
   else
   {
        gotoxy(20,13+co);
 cout<<"Invalid Command Please try again";
   }

}
    file<<setw(5)<<++readid<<setw(20)<<username<<setw(20)<<pass<<setw(20)<<fname<<setw(20)<<lname<<setw(5)<<admin<<endl;
     gotoxy(20,13+co);
    cout<<"Press y to Main Menu (y/n)";cin>>confirm;
    if(confirm=='y')
        MainMenu ab;
    }
 file.close();
    }


