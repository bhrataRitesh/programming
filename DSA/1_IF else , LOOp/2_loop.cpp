#include <iostream>
using namespace std;

int main()
{
    // find the sum of even number between 1 to n
    //  int i=2,n,sum=0;
    //  cout<<"Enter value till where u have to find sum"<< endl;
    //  cin>>n;
    //  while(i<=n){
    //  sum=sum+i;
    //  i=i+2;
    //  }
    //  cout<<"Total sum : "<<sum;

    // convet the number into celsius to fahrenheit
    //(0°C × 9/5) + 32 = 32°F

    // float F,C;
    // cout<<"enter the Fahrenheit :";
    // cin>>F;
    // C=(F-32)*5/9;
    // cout<<"Celsius : "<<C;

    // Finding the given number is prime or not
    // int n;
    // cout << "enter the number to find whether it is prime or not :";
    // cin >> n;
    // if (n >= 0)
    // {
    //     if (n == 1 || n == 0)
    //     {
    //         cout << "Number is nor prime nor composite";
    //     }
    //     else
    //     {
    //         int i=2;
    //         while(n>i)
    //         {
    //            if(n%i==0)
    //             {
    //                 cout<<"not prime :";
    //             }
    //             else
    //             cout<<"prime :";

    //             i++;
    //         }
    //     }
    // }
    // else
    //     cout << "Invalid number";


    //now will se patterns
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //now will se patterns with number
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}