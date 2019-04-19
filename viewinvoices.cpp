#include<iostream>>
#include<fstream>
#include <iomanip>
#include <windows.h>
using namespace std;
class viewinvoices
{
    protected:
    string fname,lname,email,rfname,rlname,remail;
int rid=0,tel,rtel,inid;
char con;

    int invo,cusid;
    float total;
public:
    void viewinvoicesall();

};


class single:public viewinvoices{

   int prid,rid;
   float subt;
   string des;

public:
    void viewsingle(int);


};
void single::viewsingle(int x)
{
        system("cls");

        inid=x;

        while(true)
        {
            system("cls");
            SetColor(25);
            gotoxy(17,2);
    cout<<"\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0";SetColor(27);cout<<" VIEW INVOICES ";SetColor(25);cout<<"\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0";

        fstream invoi("invoice.txt",ios::in);
        while(invoi)
        {
            invoi>>invo>>cusid>>total;
            if(invo==inid)
                break;
        }
        SetColor(15);
         gotoxy(17,6);
        cout<<"Invoice Number  :"<<inid<<endl;
        //cout<<invo<<cusid<<total<<endl;
        fstream desinvo("desinvo.txt",ios::in);
        int dow=0;
        gotoxy(30,8);
        cout<<"Product Id   "<<"Description    "<<"Sub Total"<<endl;
        if(invo==inid)
        {

        while(desinvo)
        {

             desinvo>>rid>>prid>>des>>subt;
              if(desinvo.eof())
            break;
            if(inid==rid){
                dow++;
                    gotoxy(30,9+dow);
                cout<<prid;gotoxy(45,9+dow);cout<<des;gotoxy(60,9+dow);cout<<subt<<endl;
                }
        }
        gotoxy(45,9+dow+2);
        cout<<"Total Bill :";
        gotoxy(60,9+dow+2);

        cout<<total<<endl;

        }
        else{
            gotoxy(30,9);
            cout<<"Invalid invoice Number";
        }

         int y=0;
    while (true){
        gotoxy(17,4);
    cout<<"Search Invoice  :";
        cin.clear();
        if(y!=0){while(cin.get() != '\n');}
        y++;
       cin>>inid;

        if (!cin.fail()){
           break;
        }
  gotoxy(34,4);
         cout<<"Invalid Input";
         Sleep(500);
         gotoxy(34,4);
         cout<<"             ";

    }
    if(inid==0)
        MainMenu ab;
        }
}





void viewinvoices::viewinvoicesall()
{
    SetColor(25);
    gotoxy(17,2);
    for(int down=0;down<25;down++){
        cout<<"\xb0";
        Sleep(20);
    }
    SetColor(27);
   char logins[25]= {' ','V','I','E','W',' ','I','N','V','O','I','C','E','S',' '};
    for(int down=0;down<15;down++)
    {
        cout<<logins[down];
        Sleep(50);
    }
    SetColor(25);
    for(int down=0;down<25;down++)
        {
        cout<<"\xb0";
        Sleep(20);
        }
         SetColor(15);
        gotoxy(17,6);
    cout<<"Invoice Number   "<<"customer Id    "<<"Name            "<<"      Total        "<<endl;
    fstream ab("invoice.txt",ios::in);
    int dow=0;
    while(ab)
    {

        dow++;
       ab>>invo>>cusid>>total;
       fstream cus("customer.txt",ios::in);
        if(ab.eof())
            break;
       while(cus){
        cus>>rid>>rfname>>rlname>>remail>>rtel;
        if(cusid==rid)
            break;
       }
       gotoxy(20,7+dow);
       cout<<invo;gotoxy(40,7+dow);cout<<cusid;gotoxy(50,7+dow);cout<<rfname<<" "<<rlname;gotoxy(70,7+dow);cout<<setprecision(10)<<setw(8)<<total;
    }

         int y=0;
    while (true){

        gotoxy(20,4);
    cout<<"Search Invoice :";
        cin.clear();
        if(y!=0){while(cin.get() != '\n');}
        y++;
        cin>>inid;

        if (!cin.fail()){
           break;
        }
 gotoxy(36,4);
         cout<<"Invalid Input";
         Sleep(500);
         gotoxy(36,4);
         cout<<"             ";

    }
     if(inid==0)
        MainMenu ab;
        else{
    single ac;
    ac.viewsingle(inid);
        }


}
