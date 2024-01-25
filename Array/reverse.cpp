#include<iostream>

using namespace std;

int main(){

int arr[]={3,2,3,4,34,6};
int n = sizeof(arr)/sizeof(arr[0]);

// for(int i=0;i<n/2;i++){
//   int temp =arr[i];
//   arr[i]=arr[n-1-i];
//   arr[n-1-i]=temp;
// }

int left=0;
int right=n-1;

// for same index no need to swap 
while(left<right){ 
  int temp =arr[left];
  arr[left]=arr[right];
  arr[right]=temp;
 left++;
 right--;

}



for(int i=0;i<n;i++)
  cout<<arr[i]<<", ";

}