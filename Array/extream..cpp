#include<iostream>

using namespace std;

int main(){

int arr[]={3,2,3,4,34,6};
int n = sizeof(arr)/sizeof(arr[0]);

int l=0;
int r=n-1;
while(l<=r)
  cout<<arr[l++]<<", "<<arr[r--]<<endl;




    return 0;
}