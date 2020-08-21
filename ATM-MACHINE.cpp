/*  THIS IS A MAJOR PROJECT ON BASIC ATM MACHINE. I HAVE MADE THIS PROJECT ON A 64 BIT SYSTEM USING CODELITE IDE.
    AUTHOR     : HARSH
    CREATED ON : 21/08/2020
    BATCH      : C AND C++
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int pass;
int pinNo ;
double bal;
void harsh();
void utkarsh();
void ajit();
void shweta();
void harsh()
{
cout<<"\n WELCOME HARSH \n";
for (int i=1;i<=3;i++)
{
cout <<"\t\tENTER YOUR PASSWORD : ";
cin>>pass;
double baln = 9999;
bal=baln;
if (pass==1234)
{
for(int i=1;i<=10;i++)
{
double withdraw, deposit;
int choice;
cout<<"\n";
if(i==1)
{
cout<<"\n\t\t           **************    MAIN TRANSACTION WINDOW    **************\n";
cout<<"\n\t\t           **************     SELECT A TRANSACTION      **************\n\n";
}
cout<<"\t\t                                1> BALANCE ENQUIRY\n";
cout<<"\t\t                                2> MONEY WITHDRAWAL \n";
cout<<"\t\t                                3> MONEY DEPOSIT \n";
cout<<"\t\t                                4> EXIT \n\n";
cout<<"\t\t                               ENTER A VALID CHOICE : ";
cin>>choice;
switch(choice)
{
case 1:
cout<<"\n\t\tYOU OPTED FOR BALANCE CHECK\n";
cout<<"\n\t\tYOUR BALANCE IS RS. : "<< bal<< endl;
continue;
case 2:
cout<<"\n\t\tYOU OPTED TO WITHDRAW\n";
cout<<"\t\tENTER AMOUNT TO BE WITHDRAWN IN RS : ";
cin>>withdraw;
bal = bal - withdraw;
cout<<"\n\t\tYOU WITHDREW RS: "<< withdraw<< endl;
cout<<"\n\t\tYOUR REMAINING BALANCE IS RS: "<< bal<< endl;
continue;
case 3:
cout<<"\n\t\tYOU OPTED TO DEPOSIT\n";
cout<<"\t\tENTER AMOUNT IN RS : ";
cin>>deposit;
bal = bal + deposit;
cout<<"\n\t\tYOU JUST DEPOSITED RS: "<< deposit<< endl;
cout<<"\n\t\tYOUR NEW BALANCE IS RS: "<< bal<< endl;
continue;
case 4:
cout<<"\n\t\tYOU OPTED TO EXIT\n";
abort();
system("cls");
break;
default:
cout<<"\n\t\tPLEASE CHOOSE A VALID CHOICE\n";
continue;
}
break;
}
break;
}
else if(i==3)
{
cout<<"\n\t\tYOUR CARD IS CAPTURED\n";
}
else
cout<<"\n\t\tTRY AGAIN\n";
}
}
void utkarsh()
{
cout<<"\n WELCOME UTKARSH \n";
for (int i=1;i<=3;i++)
{
cout <<"\t\tENTER YOUR PASSWORD : ";
cin>>pass;
double baln = 8999;
bal=baln;
if (pass==4321)
{
for(int i=1;i<=10;i++)
{
double withdraw, deposit;
int choice;
cout<<"\n";
if(i==1)
{
cout<<"\n\t\t           **************    MAIN TRANSACTION WINDOW    **************\n";
cout<<"\n\t\t           **************     SELECT A TRANSACTION      **************\n\n";
}
cout<<"\t\t                                1> BALANCE ENQUIRY\n";
cout<<"\t\t                                2> MONEY WITHDRAWAL \n";
cout<<"\t\t                                3> MONEY DEPOSIT \n";
cout<<"\t\t                                4> EXIT \n\n";
cout<<"\t\t                               ENTER A VALID CHOICE : ";
cin>>choice;
switch(choice)
{
case 1:
cout<<"\n\t\tYOU OPTED FOR BALANCE CHECK\n";
cout<<"\n\t\tYOUR BALANCE IS RS. : "<< bal<< endl;
continue;
case 2:
cout<<"\n\t\tYOU OPTED TO WITHDRAW\n";
cout<<"\t\tENTER AMOUNT TO BE WITHDRAWN IN RS : ";
cin>>withdraw;
bal = bal - withdraw;
cout<<"\n\t\tYOU WITHDREW RS: "<< withdraw<< endl;
cout<<"\n\t\tYOUR REMAINING BALANCE IS RS: "<< bal<< endl;
continue;
case 3:
cout<<"\n\t\tYOU OPTED TO DEPOSIT\n";
cout<<"\t\tENTER AMOUNT IN RS : ";
cin>>deposit;
bal = bal + deposit;
cout<<"\n\t\tYOU JUST DEPOSITED RS: "<< deposit<< endl;
cout<<"\n\t\tYOUR NEW BALANCE IS RS: "<< bal<< endl;
continue;
case 4:
cout<<"\n\t\tYOU OPTED TO EXIT\n";
abort();
system("cls");
break;
default:
cout<<"\n\t\tPLEASE CHOOSE A VALID CHOICE\n";
continue;
}
break;
}
break;
}
else if(i==3)
{
cout<<"\n\t\tYOUR CARD IS CAPTURED\n";
}
else
cout<<"\n\t\tTRY AGAIN\n";
}
}
void ajit()
{
cout<<"\n WELCOME AJIT \n";
for (int i=1;i<=3;i++)
{
cout <<"\t\tENTER YOUR PASSWORD : ";
cin>>pass;
double baln = 7999;
bal=baln;
if (pass==5678)
{
for(int i=1;i<=10;i++)
{
double withdraw, deposit;
int choice;
cout<<"\n";
if(i==1)
{
cout<<"\n\t\t           **************    MAIN TRANSACTION WINDOW    **************\n";
cout<<"\n\t\t           **************     SELECT A TRANSACTION      **************\n\n";
}
cout<<"\t\t                                1> BALANCE ENQUIRY\n";
cout<<"\t\t                                2> MONEY WITHDRAWAL \n";
cout<<"\t\t                                3> MONEY DEPOSIT \n";
cout<<"\t\t                                4> EXIT \n\n";
cout<<"\t\t                               ENTER A VALID CHOICE : ";
cin>>choice;
switch(choice)
{
case 1:
cout<<"\n\t\tYOU OPTED FOR BALANCE CHECK\n";
cout<<"\n\t\tYOUR BALANCE IS RS. : "<< bal<< endl;
continue;
case 2:
cout<<"\n\t\tYOU OPTED TO WITHDRAW\n";
cout<<"\t\tENTER AMOUNT TO BE WITHDRAWN IN RS : ";
cin>>withdraw;
bal = bal - withdraw;
cout<<"\n\t\tYOU WITHDREW RS: "<< withdraw<< endl;
cout<<"\n\t\tYOUR REMAINING BALANCE IS RS: "<< bal<< endl;
continue;
case 3:
cout<<"\n\t\tYOU OPTED TO DEPOSIT\n";
cout<<"\t\tENTER AMOUNT IN RS : ";
cin>>deposit;
bal = bal + deposit;
cout<<"\n\t\tYOU JUST DEPOSITED RS: "<< deposit<< endl;
cout<<"\n\t\tYOUR NEW BALANCE IS RS: "<< bal<< endl;
continue;
case 4:
cout<<"\n\t\tYOU OPTED TO EXIT\n";
abort();
system("cls");
break;
default:
cout<<"\n\t\tPLEASE CHOOSE A VALID CHOICE\n";
continue;
}
break;
}
break;
}
else if(i==3)
{
cout<<"\n\t\tYOUR CARD IS CAPTURED\n";
}
else
cout<<"\n\t\tTRY AGAIN\n";
}
}
void shweta()
{
cout<<"\n WELCOME SHWETA \n";
for (int i=1;i<=3;i++)
{
cout <<"\t\tENTER YOUR PASSWORD : ";
cin>>pass;
double baln = 6999;
bal=baln;
if (pass==8765)
{
for(int i=1;i<=10;i++)
{
double withdraw, deposit;
int choice;
cout<<"\n";
if(i==1)
{
cout<<"\n\t\t           **************    MAIN TRANSACTION WINDOW    **************\n";
cout<<"\n\t\t           **************     SELECT A TRANSACTION      **************\n\n";
}
cout<<"\t\t                                1> BALANCE ENQUIRY\n";
cout<<"\t\t                                2> MONEY WITHDRAWAL \n";
cout<<"\t\t                                3> MONEY DEPOSIT \n";
cout<<"\t\t                                4> EXIT \n\n";
cout<<"\t\t                               ENTER A VALID CHOICE : ";
cin>>choice;
switch(choice)
{
case 1:
cout<<"\n\t\tYOU OPTED FOR BALANCE CHECK\n";
cout<<"\n\t\tYOUR BALANCE IS RS. : "<< bal<< endl;
continue;
case 2:
cout<<"\n\t\tYOU OPTED TO WITHDRAW\n";
cout<<"\t\tENTER AMOUNT TO BE WITHDRAWN IN RS : ";
cin>>withdraw;
bal = bal - withdraw;
cout<<"\n\t\tYOU WITHDREW RS: "<< withdraw<< endl;
cout<<"\n\t\tYOUR REMAINING BALANCE IS RS: "<< bal<< endl;
continue;
case 3:
cout<<"\n\t\tYOU OPTED TO DEPOSIT\n";
cout<<"\t\tENTER AMOUNT IN RS : ";
cin>>deposit;
bal = bal + deposit;
cout<<"\n\t\tYOU JUST DEPOSITED RS: "<< deposit<< endl;
cout<<"\n\t\tYOUR NEW BALANCE IS RS: "<< bal<< endl;
continue;
case 4:
cout<<"\n\t\tYOU OPTED TO EXIT\n";
abort();
system("cls");
break;
default:
cout<<"\n\t\tPLEASE CHOOSE A VALID CHOICE\n";
continue;
}
break;
}
break;
}
else if(i==3)
{
cout<<"\n\t\tYOUR CARD IS CAPTURED\n";
}
else
cout<<"\n\t\tTRY AGAIN\n";
}
}
int main()
{
cout<<"\t\t    *************************************************************************\n";
cout<<"\t\t    *************************************************************************\n\n";
cout<<"\t\t                              ||   WELCOME  ||\n";
cout<<"\t\t                            ||   PATNA-BANK   ||\n\n";
cout<<"\t\t    *************************************************************************\n";
cout<<"\t\t    *************************************************************************\n\n\n\n";
cout<<"\t\t           **************    THIS IS THE DATA FOR ENTRY    **************\n";
cout<<"\t\t           **************  PIN-NO      NAME      PASSWORD  **************\n";
cout<<"\t\t           **************  1           HARSH       1234    **************\n";
cout<<"\t\t           **************  2          UTKARSH      4321    ************** \n";
cout<<"\t\t           **************  3           AJIT        5678    ************** \n";
cout<<"\t\t           **************  4          SHWETA       8765    ************** \n\n\n";
for(int i=1;i<=10;i++)
{
if(i!=1)
{
cout<<"\n\n\n\n\t\t    HEY THERE !\n";
cout<<"\t\t    WELCOME BACK\n";
}
cout<<"\t\t    PLEASE ENTER THE PIN : ";
cin>>pinNo;
system("CLS");
if(pinNo==1)
{
    harsh();
}
else if(pinNo == 2)
{
    utkarsh();
}
else if(pinNo == 3)
{
    ajit();
}
else if(pinNo == 4)
{
    shweta();
}
}
return 0;
}