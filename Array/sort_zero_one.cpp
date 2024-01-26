#include<iostream>

using namespace std;

int main(){
    int arr[]={0,0,1,1,1,1,0,0,1,0,1,1,1,0,0,1,1,0};
    int n=end(arr)-begin(arr);
    
//  count zeros and ones then sort 

int l=0;
int r=n-1;

 while(l<=r){

   while(arr[l]==0)
   l++;
  
  while(arr[r]==1)
  r--;
   
  int t=arr[l];
  arr[l++]=arr[r];
  arr[r--]=t; 

 }

for(int i=0;i<n;i++){
    cout<<*(arr+i)<<", ";
}

    return 0;
}