#include<iostream>
using namespace std;

int main ()
{

 int option;
 cout<<"Enter your choice";
 cin>>option;

 switch(option)
 {
    case 1: cout<<"Option 1 selected";
    break;

    case 2: cout<<"Option 2 selected";
    break;

    case 3: cout<<"Option 3 selected";
    break;

    case 4: cout<<"Option 4 selected";
    break;

    default: cout<<"Invalid ";
    break;
 
  }

 return 0 ;


}