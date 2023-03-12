#include<iostream>
using namespace std;
int main()
{
    int S,T,side,area,base,height;
    char choice;

    cout<<"Enter S or T to find area: ";
    cin>>choice;

    if(choice=='S')
    {
        cout<<"Square side: ";
        cin>>side;
        area=side*side;
        cout<<"The area of square is: "<<area;
    }

     else if(choice=='T')
     {
        cout<<"Base of triangle is: ";
        cin>>base;
        cout<<"Height of triangle is: ";
        cin>>height;
        area=0.5*base*height;
        cout<<"The area of triangle is: "<<area;
     }

     else
     {
        cout<<"Invalid chracter!";
     }

    return 0;
}
