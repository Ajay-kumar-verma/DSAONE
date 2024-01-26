#include<iostream>

using namespace std;

int main(){

int arr[]={2,3,4,5,6,5,4,3,2};
int n= end(arr)-begin(arr);

int unq =0;
for(int i=0;i<n;i++){
   unq=unq ^ arr[i];

}

cout<<unq;
}