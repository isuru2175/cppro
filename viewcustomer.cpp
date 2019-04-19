#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class viewcustomer
{
protected:
    int textlenth;
    string rfname,rlname,remail,sname,cusid,rtel,scus;
public:
    void searchcustomer();
    void searchcustomer(string);
};
void viewcustomer :: searchcustomer(string x)
{
    SetColor(26);
    gotoxy(17,2);
    cout<<"\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0";SetColor(22);cout<<" VIEW CUSTOMERS ";SetColor(26);cout<<"\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0";
      gotoxy(20,6);
      SetColor(15);
    cout<<"Customer ID   "<<" Name            "<<"    Email Address        "<<"    Telephone        "<<endl;
    fstream cus("customer.txt",ios::in);
    int udown=7;
    textlenth=x.length();
       while(cus){


        cus>>cusid>>rfname>>rlname>>remail>>rtel;
         if(cus.eof())
            break;
        string tname=rfname+" "+rlname+" "+cusid+" "+rtel+" "+remail;
for(int p=0;p<tname.length();p++){
        if(tname.substr(p, textlenth)==sname){
               gotoxy(20,udown);cout<<cusid;gotoxy(35,udown);cout<<rfname<<" "<<rlname;gotoxy(55,udown);cout<<remail;gotoxy(80,udown);cout<<rtel;
               udown++;
                break;
            }
}


       }

       if(udown==7)
       {
           gotoxy(20,7);
cout<<"Invalid Id Please Enter The valid Customer Id";
       }
      // else

       gotoxy(20,4);
       cout<<"Search Customer :";cin>>sname;
        system("cls");
       if(sname !="0")
       searchcustomer(sname);
       else
        MainMenu ab;
}
void viewcustomer::searchcustomer()
{
    SetColor(26);
    gotoxy(17,2);
    for(int down=0;down<30;down++){
        cout<<"\xb0";
        Sleep(20);
    }
    SetColor(22);
    char logins[25]= {' ','V','I','E','W',' ','C','U','S','T','O','M','E','R','S',' '};
    for(int down=0;down<16;down++)
    {
        cout<<logins[down];
        Sleep(50);
    }
    SetColor(26);
    for(int down=0;down<30;down++){
        cout<<"\xb0";
        Sleep(20);
    }
SetColor(15);
    gotoxy(20,6);
    cout<<"Customer ID   "<<" Name            "<<"    Email Address        "<<"    Telephone        "<<endl;
    fstream cus("customer.txt",ios::in);
int dow=0;
       while(cus){
            dow++;

        cus>>cusid>>rfname>>rlname>>remail>>rtel;
       if(cus.eof())
            break;
        gotoxy(20,7+dow);
       cout<<cusid;gotoxy(35,7+dow);cout<<rfname<<" "<<rlname;gotoxy(55,7+dow);cout<<remail;gotoxy(80,7+dow);cout<<rtel;

       }
       gotoxy(20,4);
       cout<<"Search Customer :";cin>>sname;
       system("cls");
       if(sname !="0")
       searchcustomer(sname);
        else
        MainMenu ab;


}
