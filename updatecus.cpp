#include<iostream>
#include<fstream>>
#include<iomanip>
using namespace std;
class updatecus
{
   string fname,lname,email,rfname,rlname,remail;
int rid=0,id=0,tel,rtel,loca;
char con;
public:
    updatecus();
};
updatecus::updatecus()
{
    fstream readcus("customer.txt",ios::in);
    fstream upus("customer.txt",ios::app);
    cout<<"Enter customer ID :";cin>>id;
    while(readcus){
    readcus>>rid>>rfname>>rlname>>remail>>rtel;
    cout<<rid;

    if(id==rid){
    loca=readcus.tellg();
    cout<<endl<<loca<<endl;
        break;
    }

    }
    cout<<"Enter customer First Name :";cin>>fname;
    cout<<"Enter customer Last Name  :";cin>>lname;
    cout<<"Enter customer Email      :";cin>>email;
    cout<<"Enter customer Telephone  :";cin>>tel;

    readcus.seekp(-87,ios::cur);
    upus<<setw(5)<<rid<<setw(20)<<fname<<setw(20)<<lname<<setw(30)<<email<<setw(12)<<tel<<endl;
}
