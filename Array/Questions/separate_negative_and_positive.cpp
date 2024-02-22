#include<iostream>

using namespace std;

int main(){

int arr[]={2,3,-3,-4,3,-41,90,8,7,-4,-2};

int n=sizeof(arr)/sizeof(arr[0]);

int l= 0;
int r= n-1;

// while(l<r){

// while(arr[l]>0)
// l++;

// while(arr[r]<0)
// r--;

// if(l<r){
// int temp = arr[l];
// arr[l]=arr[r];
// arr[r]=temp;
// l++; r--;
// }
// }

int ind=0;

for(int i=0;i<n;i++){
  if(arr[i]<0){
   int t=arr[ind];
   arr[ind]=arr[i];
   arr[i]=t;
    ind++;
  }


}




for(int i=0;i<n;i++){
    cout<<arr[i]<<"\t";
}

    return 0;
}
