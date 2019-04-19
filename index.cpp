#include<iostream>
#include<fstream>
using namespace std;
class open{
int cusid,rtel,scus,textlenth;
    string rfname,rlname,remail,sname;
public:
    open()
    {
         fstream ab("customer.txt",ios::in);
fstream cus("customer.txt",ios::in);
cout<<"enter name :";
cin>>sname;
textlenth=sname.length();
       while(cus){


        cus>>cusid>>rfname>>rlname>>remail>>rtel;

        if(rfname.substr(0, textlenth)==sname){
            cout<<cusid<<" "<<rfname<<" "<<rlname<<" "<<remail<<" "<<rtel<<endl;
            //break;
        }
       if(cus.eof())
            break;



       }
    }
};


