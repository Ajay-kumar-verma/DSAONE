#include<iostream>

using namespace std;

int main(){

// int *arr=new int[0];
// int arr[2]={0,0};
   int arr[]={0,0};
arr[0]=23;
arr[1]=56;

// arr[2]=456;

for(int i=0;i<3;i++)
    cout<<arr[i]<<'\t';

    return 0;
}