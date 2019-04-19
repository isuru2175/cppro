MainMenu :: MainMenu()
{
    SetColor(28);
    system("cls");
     gotoxy(17,3);

    cout<<rmname;
    gotoxy(17,4);
    if(atype==1)
    cout<<"Admin";
    else if(atype==2)
        cout<<"General User";
SetColor(11);
    int logc1=0,logc2=0,logc3=0,logc4=0,logc5=0,logc6=0,logc7=0;
    gotoxy(17,6);
    for(int down=0;down<16;down++){
        cout<<"\xb0";
        Sleep(20);
    }

   char logins[12]= {' ','M','A','I','N',' ','M','E','N','U'};
    for(int down=0;down<12;down++)
    {
        cout<<logins[down];
        Sleep(50);
    }
    for(int down=0;down<16;down++)
        {
        cout<<"\xb0";
        Sleep(20);
        }
        SetColor(14);
 int adown=8;
    for(logc1=logc1;logc1<20;logc1++){
        gotoxy(logc1,adown);
        cout<<" 1-Register Customer";
          Sleep(logc1*2);
    }
if(atype==1){
        adown +=2;
    for(logc2=logc2;logc2<20;logc2++){
        gotoxy(logc2,adown);
        cout<<" 2-View Customer";
        Sleep(logc2*2);
    }
}
if(atype==1){
adown +=2;
       for(int co=0;co<20;co++){
        gotoxy(co,adown);
        cout<<" 3-Add Description";
        Sleep(co*2);
        }
}
adown +=2;
       for(logc3=logc3;logc3<20;logc3++){
        gotoxy(logc3,adown);
        cout<<" 4-Create Invoice";
        Sleep(logc3*2);
        }
if(atype==1){
        adown +=2;
       for(logc4=logc4;logc4<20;logc4++){
        gotoxy(logc4,adown);
        cout<<" 5-Search Invoice";
        Sleep(logc4*2);
        }
}
if(atype==1){
        adown +=2;
         for(logc5=logc5;logc5<20;logc5++){
        gotoxy(logc5,adown);
        cout<<" 6-Sign Up";
        Sleep(logc5*2);

        }
}
adown +=2;
        for(logc6=logc6;logc6<20;logc6++){
        gotoxy(logc6,adown);
        cout<<" 7-About Us";
        Sleep(logc6*2);
        }
        adown +=2;
        for(int logc6=0;logc6<20;logc6++){
        gotoxy(logc6,adown);
        cout<<" 8-Sign Out";
        Sleep(logc6*2);
        }
        adown +=2;
        for(int logc6=0;logc6<20;logc6++){
        gotoxy(logc6,adown);
        cout<<" 9-Exit";
        Sleep(logc6*2);
        }
        adown +=2;
         for(logc7=logc7;logc7<25;logc7++){
        gotoxy(logc7,adown);
        cout<<" ***Pleace Select The option  :";
        Sleep(logc7*2);
        }
        while(true){

int y=0;
           while (true){

        cin.clear();
        if(y!=0){while(cin.get() != '\n');}
        y++;
         gotoxy(55,adown);
        cin>> Option;
        if (!cin.fail()){
           break;
        }
        gotoxy(55,adown);
         cout<<"Invalid Input";
         Sleep(500);
       gotoxy(55,adown);
         cout<<"             ";


    }
       if(Option==1)
       {
           system("cls");signupcus();
       }
       else if(Option==2 && atype==1)
       {
           system("cls"); viewcustomer a;a.searchcustomer();
       }
       else if(Option==3 && atype==1)
       {
           system("cls"); description a;
       }
       else if(Option==4)
       {
          system("cls"); invoice();
       }
       else if(Option==5 && atype==1)
       {
         system("cls");viewinvoices ac;ac.viewinvoicesall();
       }
       else if(Option==6 && atype==1)
       {
        system("cls");signup a;
       }
       else if(Option==7)
       {
        system("cls");About a;
       }
       else if(Option==8)
       {
           system("cls");
           string nme="Good bye "+rmname+" ...";
           for(int p=0;p<=nme.length();p++){
                gotoxy(30,10);
       cout<<nme.substr(0, p);
       Sleep(50);
           }
           system("cls");
        system("cls");login a;a.logins();
       }
       else if(Option==9)
       {
           system("cls");
           string nme="Good bye "+rmname+" ...";
           for(int p=0;p<=nme.length();p++){
                gotoxy(30,10);
       cout<<nme.substr(0, p);
       Sleep(50);

}
        exit(0);
       }
       else{
        cout << "Invalid Option";
       }

        }
    }
