#include<iostream>

using namespace std;

bool search(int arr[][4],int row,int col,int target){

 for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(arr[i][j]==target)
        return true;
    }
 }

return false;
}

int main(){

int arr[4][4]={{3,3,2,1},{4,5,6,7},{7,6,2,9},{5,3,21,7}};

int key = 21;
if (search(arr,4,4,key)) {
cout<<"key is found: ";
}
else{
    cout<<"Key does not exist";
}
    return 0;
}