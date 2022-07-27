#include <iostream>
#include <math.h>
using namespace std;


int main()
{

// converting decimal to binary

    // int n = 169;
    // int ans = 0;
    // int i = 0;
    // while (n != 0)
    // {
    //     int bit = n & 1;
    //     ans = (bit * pow(10, i)) + ans;
    //     n = n >> 1;
    //     i++;
    //     // cout<<ans<<endl; //just for checking
    // }
    // cout << "Answer is:" << ans;

// converting binary to decimal

int n;
cin>>n;
int i=0,ans=0;
while(n!=0)
{
    int digit =n%10;
    ans=(digit*pow(2,i))+ans;
    n=n/10;
    i++;
}
cout<<ans;
    return 0;
}