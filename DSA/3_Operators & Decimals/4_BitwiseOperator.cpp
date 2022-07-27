#include<iostream>
using namespace std;
 
int main() {
    
// int a=4,b=6;
// cout<<"a&b "<<(a&b)<<endl;
// cout<<"a|b "<<(a|b)<<endl;
// cout<<"~a "<<~a<<endl;
// cout<<"a^b "<<(a^b)<<endl;

// Five question 

// Q1.

// int a,b=1;
// a=10;
// if(++a)
// cout<<b;
// else
// cout<<++b;     //ans : 1

// Q2.

// int a=1,b=2;

// if(a-->0 && ++b>2){
//     cout<<"Stage1-Inside IF";
// }
// else                            //ans: Stage1-Inside IF 0 3
// cout<<"Stage2-Inside else";

// cout<<a<<" " <<b<<endl;

// Q.3 

// int a=1,b=2;
// if(a-->0 || ++b>2){
//     cout<<"Stage1-Inside IF ";
// }
// else                //ans: Stage1-Inside IF 0 2
// cout<<"Stage2-Inside else ";

// cout<<a<<" " <<b<<endl;

// Q.4 

// int number=3;
// cout<<(25*(++number));   //ans: 100

// Q.5

// int a=1;
// int b=a++;
// int c=++a;          // ans: 13
// cout<<b;
// cout<<c;

//coding for fibonacci series 

// int n;
//  cout<<"Enter the till you want to print ";
//  cin>>n;

//  int a=0;
//  int b=1;
//  cout<<a <<" "<<b << " ";
 
//  for(int i=1;i<=n;i++){
//     int sum =a+b;
//     cout<<sum <<" ";
//     a=b;
//     b=sum;
//  }


// coding for prime number

// int n;
// cout<<"enter the number  ";
// cin>>n;
// bool count=1;
// for(int i=2;i<n;i++){
//     if(n%i==0){
//         // cout<<"Not prime ";
//         count=0;
//         break;
//     }

// }
// if(count==0)
// cout<<"NOt prime ";
// else 
// cout<<"Prime";

//Question 1

// for(int i=0;i<=5;i++){
//     cout<<i<<" ";       //ans: 0 2 4
//     i++;
// }

//Question 2
// for(int i=0;i<=5;i--){
//     cout<<i<<" ";
//     i++;                //ans: loop of 0
// }

//Question 3

// for(int i=0; i<=15;i+=2){
//     cout<<i<<" ";
//     if(i&1){
//         continue;       //ans: 0 3 5 7 9 11 15
//     }
//     i++;
// }

// Question 4

// for(int i=0;i<5;i++){
//     for(int j=i;j<=5;j++) {
//         cout<<i<<" " <<j<<endl;  
//     }
// }

//ans:
// 0 0
// 0 1
// 0 2
// 0 3
// 0 4
// 0 5
// 1 1
// 1 2
// 1 3
// 1 4
// 1 5
// 2 2
// 2 3
// 2 4
// 2 5
// 3 3
// 3 4
// 3 5
// 4 4
// 4 5


// Question 5

for(int i=0;i<5;i++){
    for(int j=i;j<=5;j++){
        if(i+j == 10){
            break;
        }
        cout<<i<<" "<<j<<endl;
    }
}

// ans: 
// 0 0
// 0 1
// 0 2
// 0 3
// 0 4
// 0 5
// 1 1
// 1 2
// 1 3
// 1 4
// 1 5
// 2 2
// 2 3
// 2 4
// 2 5
// 3 3
// 3 4
// 3 5
// 4 4
// 4 5



return 0 ;
}

