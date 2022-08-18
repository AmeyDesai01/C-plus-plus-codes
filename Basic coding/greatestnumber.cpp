#include<iostream>
using namespace std;

int main(){

    int num1 , num2;
    cout<<"Enter first number" ;
    cin>>num1;
    cout<<"Enter second number";
    cin>>num2;


    if (num1==num2)
      cout<<"Both are equal";
    else if (num1>num2)
      cout<<num1<< "Is greater than" <<num2 ;
    else
     cout<<num2 << "Is greater than" << num1;


return 0;





}