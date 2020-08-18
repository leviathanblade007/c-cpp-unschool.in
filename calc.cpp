#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
void sum();
void div();
void product();
void subs();
using namespace std;
double ans;
int n1,n2;
class cls
{
public:
    cls()
    {
        char a[5];
        cout << "Enter what u want to do :\n + for addition \n - for substraction \n * for multiplication \n / for division \n ";
        cin >> a;
        cout << "\nEnter the 1st n 2nd nos : \n";
        cin >> n1 >> n2;
        if((strcmp(a,"+"))==0)
        {
            sum();
        }
        else if((strcmp(a,"-"))==0)
        {
            subs();
        }
        else if((strcmp(a,"*"))==0)
        {
            product();
        }
        else if((strcmp(a,"/"))==0)
        {
            div();
        }
        
    }
    ~cls()
    {}
};
    void sum()
    {
        ans=n1+n2;
        cout << "\nSum of "<<n1<<" and "<<n2<<" is "<<ans<<endl;
    }
    void product()
    {
        ans=n1*n2;
        cout << "\nProduct of "<<n1<<" and "<<n2<<" is "<<ans<<endl;
    }
    void div()
    {
        ans=n1/n2;
        cout<<"\nQuotient of "<<n1<<" and "<<n2<<" is "<<ans<<endl;
    }
    void subs()
    {
        ans=n1-n2;
        cout<<"\nDifference of "<<n1<<" and "<<n2<<" is "<<ans<<endl;
    } 
int main()
{
    
    while(1)
    {
        char a[5];
        cls obj;
        cout << "\n\n Do you want to do another operation ?\n Enter yes or no\n ";
        cin >>a;
        if((strcmp(a,"yes"))==0)
        {
            system("CLS");
        }
        else if((strcmp(a,"no"))==0)
        {
            cout<<"Destructor called ";
            break;
        } 
    }
}
