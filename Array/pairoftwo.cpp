#include<iostream>

using namespace std;

int main(){
  
  int arr[]={1,2,3,4};
  int n = end(arr)-begin(arr);

  for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
        cout<<arr[i]<<", "<<arr[j]<<endl;
    }

  }

cout<<endl;

for(int i=0;i<n-2;i++){
      for(int j=i+1;j<n;j++){
       for(int k=j+1;k<n;k++){
          cout<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<endl;
       }
      
       }

  }

    return 0;
}