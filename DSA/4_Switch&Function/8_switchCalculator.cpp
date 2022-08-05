#include<iostream>
using namespace std;
 
int main() {
char n;
cout<<"Chose any one : + , - , * , / "<<endl;
int a=10,b=5;
cin>>n;
switch(n){
    case '+': cout<<a+b;
        break;
    case '-': cout<<a-b;
        break;
    case '*': cout<<a*b;
        break;
    case '/': cout<<a/b;
        break;
    default : cout<<"INvalid try again";
}

return 0 ;
}