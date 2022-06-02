#include<iostream>
using namespace std;
 
int main() {
    //understanding if else
    /*
int a , b;
cout<<"enter the value of a and b respectively:- \n ";
cin >>a>>b;
cout<<"greater number is : " ;
if(a>b)
cout<< a;
else 
cout<<b;
*/


// LEts understand the use of cin.get() how its works
// int p ;
//  p =cin.get();
//  cout << p ;

// checking if the number is +ve , -ve or zero

// cout << "Enter the number : "<<endl;
// int n;
// cin>> n;
// if(n>0)
// cout<<"+ve";
// else if(n<0)
// cout<<"-ve";
// else
// cout<<"0";

//here we identify lower, upper and numeric
char a;
cin>>a;
if(a>='a' && a<='z')
cout<<"lower case";
else if(a>='A' && a<='Z')
cout<<"upper case";
else if(a>=48 && a<=57 )  //here we have use the ascii value of the no. 0-9 i.e 48-57
cout<<"numeric";


return 0 ;
}