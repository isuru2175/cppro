#include<iostream>
#include<fstream>
#include<iomanip>
#include<limits>
#include<windows.h>
using namespace std;
class invoice{
    int invoiceid=1,cusid,type,cnt;
    int rinvoiceid=0,rcusid,rtype,rcnt;
    string rdes;
    string rfname,rlname,remail;
    int rid,rtel,did;
    float price=1000.00,total=0,rtotal,rprice;
public:
    invoice();

};
invoice::invoice(){
    SetColor(27);
      gotoxy(17,2);
        for(int down=0; down<25; down++)
        {
            cout<<"\xb0";
            Sleep(20);
        }
        SetColor(25);
        char logins[10]= {' ','I','N','V','O','I','C','E',' '};
    for(int down=0;down<9;down++)
    {
        cout<<logins[down];
        Sleep(50);
    }
     SetColor(27);
    for(int down=0;down<25;down++){
        cout<<"\xb0";
        Sleep(20);
    }
    fstream invo("invoice.txt",ios::app);
    fstream desinvo("desinvo.txt",ios::app);
    fstream rinvo("invoice.txt",ios:: in);


    while(rinvo){rinvo>>rinvoiceid>>rcusid>>rtotal;
    }
rinvoiceid++;
while(true){
    system("cls");
     SetColor(27);
        gotoxy(17,2);
        cout<<"\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0"; SetColor(25);cout<<" INVOICE "; SetColor(27);cout<<"\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0";
SetColor(15);
    gotoxy(20,4);
cout<<"Invoice Number          :"<<rinvoiceid<<endl;
int y=0;
while (true){
       gotoxy(20,5);
    cout<<"Enter Customer id       :";
        cin.clear();
        if(y!=0){while(cin.get() != '\n');}
        y++;
        cin >> cusid;
        if (!cin.fail()){
           break;
        }

        //system("cls");
         gotoxy(20,6);
        cout<<"Invalid customer Number"<<endl;
        Sleep(500);
        system("cls");
        gotoxy(17,2);
        cout<<"\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0 INVOICE \xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0";
    gotoxy(20,4);
cout<<"Invoice Number          :"<<rinvoiceid<<endl;


    }
    if(cusid==0)
    MainMenu ab;
    fstream rcus("customer.txt",ios::in);

while(rcus)
{
   rcus>>rid>>rfname>>rlname>>remail>>rtel;
   if(rid==cusid)
    break;

}
if(rid==cusid)
 {

gotoxy(20,6);
cout<<"customer Name           :"<<rfname<<" "<<rlname<<endl;
int dow=0;
    while(true){
gotoxy(20,7+dow);
cout<<"Enter Description id    :";cin>>type;
fstream rdesc("description.txt",ios::in);
    while(rdesc){
        rdesc>>did>>rdes>>rprice;
        if(type==did)
            break;

    }

if(type==0)
{
    gotoxy(20,10+dow);
system("pause");
    break;
}
    if(did==type){
            gotoxy(20,8+dow);
            cout<<"Description             :"<<rdes<<endl;
    desinvo<<setw(5)<<rinvoiceid<<setw(5)<<type<<setw(10)<<rdes<<setw(8)<<rprice<<endl;
    total+=rprice;
    gotoxy(20,9+dow);
    cout<<"Total is ="<<total<<endl;
    dow=dow+5;

    }
    else{
        gotoxy(20,8+dow);
        dow=dow+4;
        cout<<"please enter valid id"<<endl;
    }

    }
 }
 else
 {
     cout<<"Invalid customer Number"<<endl;
 }

if(total !=0){
invo<<setw(5)<<rinvoiceid<<setw(5)<<cusid<<setw(8)<<total<<endl;
rinvoiceid++;
}
//cout<<"Enter Description id    :";cin>>type;
}
}



