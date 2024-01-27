#include<iostream>

using namespace std;

void print(int arr[3][3],int row,int col){
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++){
             cout<<arr[i][j]<<"\t";
        }
      cout<<endl;        
     }
}

void trsp(int arr[3][3],int row,int col){
   
   for(int i=0;i<row;i++){
    for(int j=0;j<i;j++){
       int temp = arr[i][j];
       arr[i][j]=arr[j][i];
       arr[j][i]=temp;
     }
  }
}

int main(){

int arr[3][3]={{3,4,5},{1,6,7},{4,9,0}};
print(arr,3,3);
trsp(arr,3,3);
cout<<endl;
print(arr,3,3);
 

    return 0;
}