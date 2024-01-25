#include <iostream>

using namespace std;

int main(){

int arr[]={1,1,0,0,1,1,01,1,1,1,0,1,1,1,0,0,1,0,1,0,1,1};
int n =sizeof(arr)/sizeof(arr[0]); 

int zc=0;
int oc=0;
for(int i=0;i<n;i++){

    if(arr[i]==0)
    zc++;
    if(arr[i]==1)
    oc++;
}

cout<<"Zero count: "<<zc<<endl<<"one count: "<<oc;

    return 0;
}