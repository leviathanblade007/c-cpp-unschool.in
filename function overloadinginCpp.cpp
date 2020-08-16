#include <iostream>
float area(int rad);
float area(int l,int b);
float area(float h,int bs); 
using namespace std;
int main()
{
    int a,r,l,b;float ar,h;
    cout << "Enter your choice \nEnter 1 for circle , 2 for rectangle , 3 for triangle : " ;
    cin >>  a;
    switch(a)
    {
        case 1:
        cout << "Enter the radius of circle : ";
        cin>> r;
        ar = area(r);
        cout << "Area of circle is " << ar << " sq. units";
        break;
        case 2:
        cout << "Enter the length and breadth of rectangle : \n";
        cin >> l;
        cin >> b;
        ar = area(l,b);
        cout << "Area of rectangle is " << ar << " sq. units";
        break;
        case 3 :
        cout << "Enter the height and base of triangle : \n";
        cin >> h;
        cin >> b;
        ar = area(h,b);
        cout << "Area of triangle is " << ar << " sq. units";
        break;
        default :
        cout << "Wrong choice";
    }
    return 0;
}
float area(int rad)
{
    float a;
    a=3.14*rad*rad;
    return a;
}
float area(int l,int b)
{
    float a;
    a=l*b;
    return a;
}
float area(float h ,int b)
{
    float a;
    a=0.5*h*b;
    return a;
}