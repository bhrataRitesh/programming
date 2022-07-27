#include<iostream>

using namespace std;
 
//  void selectionSort(int arr[], int n)
// {   
//     int temp=0;
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i] > arr[j]){
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }
int main() {
int arr[5]={1,6,0,8,5};
int n=sizeof(arr)/sizeof(arr[0]);

// selectionSort(arr,n);
int temp=0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0 ;
}