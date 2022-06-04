#include<iostream>
using namespace std;
 
int main() {
//1. pattern is 
// 1 2 3 4 5 ....n
// 1 2 3 4 5 ....n
// int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

    //2. pattern
    // n ... 3 2 1
    // n ... 3 2 1
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<n-j+1;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    //3. pattern 
    // 1 2 3
    //4 5 6
    //7 8 9
// int n;
//     cin>>n;
//     int i=1;
//     int count =0;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//              count++;
//             cout<<count;
           
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
    // 4. pattern
    // *
    // **
    // ***
    // ****
    // *****

    // int n;
    // cin>>n;
    // int i=1;
   
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
            
    //         cout<<"*";
           
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // 5. pattern 
    // 1
    // 22
    // 333
    // 4444
    // 55555
    //   int n;
    // cin>>n;
    // int i=1;
   
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
            
    //         cout<<i;
           
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    
    // 6. pattern 
    //   int n;
    // cin>>n;
    // int i=1,count=1;
   
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
            
    //         cout<<count;
    //        count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // 7. pattern 
    // 1
    // 23
    // 345
    // 4567
    // 56789
    //  int n;
    // cin>>n;
    // int i=1;
   
    // while(i<=n){
    //     int j=1;
    //    int count=i;
    //     while(j<=i){
            
    //         cout<<count;
    //        count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // or 
    //  int n;
    // cin>>n;
    // int i=1;
   
    // while(i<=n){
    //     int j=1;
       
    //     while(j<=i){
            
    //         cout<<i+j-1;
           
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // 8. pattern 
    // 1
    // 21
    // 321
    // 4321
    //  int n;
    // cin>>n;
    // int i=1;
   
    // while(i<=n){
    //     int j=1;
    //    int count=i;
    //     while(j<=i){
            
    //         cout<<count;
    //        count--;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // or 
    //  int n;
    // cin>>n;
    // int i=1;
   
    // while(i<=n){
    //     int j=1;
       
    //     while(j<=i){
            
    //         cout<<i-j+1;
           
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // 9. pattern 
    
//      int n;
//     cin>>n;
//     int i=1;
//    char c='A';
//     while(i<=n){
//         int j=1;
       
//         while(j<=n){
            
//             cout<<c<<" ";
            
           
//             j++;
//         }
//         c++;
//         cout<<endl;
//         i++;
//     }
//or

// int n;
//     cin>>n;
//     int i=1;
   
//     while(i<=n){
//         int j=1;
       
//         while(j<=n){
//             char c='A'+i-1;
//             cout<<c<<" ";
            
           
//             j++;
//         }
        
//         cout<<endl;
//         i++;
//     }

// 10. pattern
// A B C
// A B C
// A B C

// int n;
//     cin>>n;
//     int i=1;
   
//     while(i<=n){
//         int j=1;
       
//         while(j<=n){
//             char c='A'+j-1;
//             cout<<c<<" "; 
            
//             j++;
//         }
        
//         cout<<endl;
//         i++;
//     }
    // 11. pattern
// A B C
// D E F
// G H I
// int n;
//     cin>>n;
//     int i=1;
//    char c='A';
//     while(i<=n){
//         int j=1;
       
//         while(j<=n){
            
//             cout<<c<<" "; 
//             c=c+1;
//             j++;
//         }
        
//         cout<<endl;
//         i++;
//     }

// 12. Pattern 
// A B C 
// B C D 
// C D E 
int n;
    cin>>n;
    int i=1;
   char c='A';
    while(i<=n){
        int j=1;
       
        while(j<=n){
            char m=c+j-1;
            cout<<m<<" "; 
            
            j++;
        }
        c=c+1;
        cout<<endl;
        i++;
    }
return 0 ;
}