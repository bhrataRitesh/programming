#include<iostream>
using namespace std;
 
int main() {
int arr[5]={6,2,3,1,4};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=1;i<n;i++){
    int temp=i;
    int j=i-1;
    for(;j>=0;j--){
        if(arr[j]>temp){
            //shifting
            arr[j+1]=arr[j];
        }
        else 
        break;
    }
    arr[j+1]=temp;
}

for(int k=0;k<n;k++){
    cout<<arr[k]<<" ";
}
return 0 ;
}