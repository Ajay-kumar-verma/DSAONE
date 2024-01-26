#include<iostream>

using namespace std;

int main(){

int arr[]={2,1,3,4,5,3,23,67,54};
int n= end(arr)-begin(arr);

int x=*arr;

for(int i=0;i<n-1;i++){
    arr[i]=arr[i+1];
}
arr[n-1]=x;

for(int i=0;i<n;i++){
    cout<<*(arr+i)<<", ";
}
    return 0;
}