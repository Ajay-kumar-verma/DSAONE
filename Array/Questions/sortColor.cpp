#include<iostream>

using namespace std;

int main(){

// int arr[]={1,1,0,0,0,1,0,1,0,0,1,1,1,0,1};
// int n =sizeof(arr)/sizeof(arr[0]);

// int ind=0;
// int l=0;
// int r=n-1;

// while(ind<r){
//  if(arr[ind]==0){
//     int t= arr[ind];
//     arr[ind]=arr[l];
//     arr[l]=t;
//     l++; ind++;
//   }
//   else ind++; 
//  }

// while(ind<r){
//  if(arr[ind]==1){
//     int t= arr[ind];
//     arr[ind]=arr[r];
//     arr[r]=t;
//     r--;
//   }
//   else ind++; 
//  }

// for(int i=0;i<n;i++){
// cout<<arr[i]<<"\t"; 
// }


int arr[]={1,2,0,0,2,1,0,1,2,0,1,2,1,0,1};
int n =sizeof(arr)/sizeof(arr[0]);

int ind=0;
int l=0;
int r=n-1;

while(ind<r){

 if(arr[ind]==0){
    int t= arr[ind];
    arr[ind]=arr[l];
    arr[l]=t;
    l++; ind++;
  }
 else if(arr[ind]==2){
    int t= arr[ind];
    arr[ind]=arr[r];
    arr[r]=t;
    r--;
  }
  else ind++; 
 }


for(int i=0;i<n;i++){
cout<<arr[i]<<"\t"; 
}

    return 0;
}