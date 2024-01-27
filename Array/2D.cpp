#include<iostream>

using namespace std;

int main(){

int arr[][3]={{3,2,4},{3,4,9},{2,2,1}};

cout<<"Array size: "<<sizeof(arr)<<endl;
cout<<"Eles in array: "<<sizeof(arr)/sizeof(arr[0][0]);
cout<<endl;
for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
    cout<<arr[j][i]<<"\t";
  }

    cout<<endl;
}



    return 0;
}