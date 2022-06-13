#include <iostream>
using namespace std;

int main()
{
    // 1. pattern is
    //  1 2 3 4 5 ....n
    //  1 2 3 4 5 ....n
    //  int n;
    //      cin>>n;
    //      int i=1;
    //      while(i<=n){
    //          int j=1;
    //          while(j<=n){
    //              cout<<j;
    //              j++;
    //          }
    //          cout<<endl;
    //          i++;
    //      }

    // 2. pattern
    //  n ... 3 2 1
    //  n ... 3 2 1
    //  int n;
    //  cin>>n;
    //  int i=1;
    //  while(i<=n){
    //      int j=1;
    //      while(j<=n){
    //          cout<<n-j+1;
    //          j++;
    //      }
    //      cout<<endl;
    //      i++;
    //  }
    // 3. pattern
    //  1 2 3
    // 4 5 6
    // 7 8 9
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
    // or

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
    // int n;
    //     cin>>n;
    //     int i=1;
    //    char c='A';
    //     while(i<=n){
    //         int j=1;

    //         while(j<=n){
    //             char m=c+j-1;
    //             cout<<m<<" ";

    //             j++;
    //         }
    //         c=c+1;
    //         cout<<endl;
    //         i++;
    //     }
    // 13. Pattern
    // A
    // B B
    // C C C
    // int n;
    // cin>>n;
    // int i=1;

    // while(i<=n){
    //     int j=1;

    //     while(j<=i){
    //         char c='A'+i-1;
    //         cout<<c;
    //         j++;
    //     }
    //     cout<<endl;

    // i++;
    // }
    // 14. Pattern
    // A
    // B C
    // D E F

    // int n;
    // cin>>n;
    // int i=1;
    // char c='A';
    // while(i<=n){
    //     int j=1;

    //     while(j<=i){
    //         // char m=c+j-1;
    //         cout<<c;
    //         j++;
    //         c++;
    //     }
    //     cout<<endl;

    // i++;
    // }

    // 15. Pattern
    //  A
    //  B C
    //  C D E
    //  int n;
    //  cin>>n;
    //  int i=1;

    // while(i<=n){
    //     int j=1;

    //     while(j<=i){
    //         char m='A'+i+j-2;
    //         cout<<m;
    //         j++;

    //     }
    //     cout<<endl;

    // i++;
    // }

    // 16. Pattern
    // D
    // C D
    // B C D
    // A B C D

    // int n;
    // cin >> n;
    // int i = 1;
    // char c = 'A' + n - 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << c;
    //         c++;
    //         j++;
    //     }
    //     cout << endl;

    //     i++;
    //     c=c-i;
    // }

    // 17. Pattern
    //     *
    //    **
    //   ***
    //  ****
    //  int n;
    //  cin>>n;
    //  int i=1;
    //  while(i<=n){
    //     int space=n-i;
    //     while(space){
    //         cout<<' ';
    //         space--;
    //     }
    //     int j=1;
    //     while(j<=i){
    //         cout<<'*';
    //        j++;
    //     }
    //     cout<<endl;
    //     i++;
    //  }

    // 18. Pattern
    // ****
    // ***
    // **
    // *
    // int i;
    // cin>>i;
    // // int i=n;
    // while(i>=0){
    //     int j=1;
    //     while(j<=i){
    //         cout<<'*';
    //         j++;
    //     }
    //     cout<<endl;
    //     i--;
    // }

    // 19. Pattern
    // *****
    //  ****
    //   ***
    //    **
    //     *

    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //    int space=i;
    //     while(space!=1){
    //         cout<<' ';
    //     space=space-1;
    //     }
    //     int j=n;
    //     while(j>=i){
    //         cout<<'*';
    //         j--;
    //     }
    //     i++;
    //     cout<<endl;
    // }

    // 20. Pattern
    // 1111
    //  222
    //   33
    //    4
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //    int space=i;
    //     while(space!=1){
    //         cout<<' ';
    //     space=space-1;
    //     }
    //     int j=n;
    //     while(j>=i){
    //         cout<<i;
    //         j--;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // 21. Pattern
    //    1
    //   22
    //  333
    // 4444

    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int space=n-i;
    //     while(space){
    //         cout<<' ';
    //         space--;
    //     }
    //     int j=1;
    //     while(j<=i){
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // 22. Pattern

    // 1234
    //  234
    //   34
    //    4
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //    int space=i;
    //     while(space!=1){
    //         cout<<' ';
    //     space=space-1;
    //     }
    //     int j=n;
    //     int a=i;
    //     while(j>=i){
    //         cout<<a;
    //         j--;
    //         a++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // 23. Pattern
    //    1
    //   23
    //  456
    // 78910
    // int n;
    // cin>>n;
    // int i=1;
    // int a=i;
    // while(i<=n){
    //     int space=n-i;
    //     while(space){
    //         cout<<' ';
    //         space=space-1;
    //     }
    //     int j=1;
    //     while(j<=i){
    //         cout<<a;
    //         a++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // 24. Pattern
    //    1
    //   121
    //  12321
    // 1234321

    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int space=n-i;
    //     while(space){
    //         cout<<' ';
    //         space--;
    //     }
    //     int j=1;
    //     while(j<=i){
    //         cout<<j;
    //         j++;
    //     }
    //     int count=i-1;
    //     while(count)
    //     {
    //         cout<<count;
    //         count--;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // Dabangg Pattern
    // 1234554321
    // 1234**4321
    // 123****321
    // 12******21
    // 1********1

    int n;
    cin >> n;
    int i = 1;
    int j = n;
    while (i <= n)
    {
        int count1 = 1;
        while (count1 <= j)
        {
            cout << count1;
            count1++;
        }
        if (i != 1)
        {
            int star1 = 1;
            while (star1 <= i-1)
            {
                cout << '*';
                star1++;
            }
            int star2 = 1;
            while (star2 <= i-1)
            {
                cout << '*';
                star2++;
            }
        }
        int count2 = j;
        while (count2)
        {
            cout << count2;
            count2--;
        }
        cout << endl;
        i++;
        j--;
    }

    return 0;
}