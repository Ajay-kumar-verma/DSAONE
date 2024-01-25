#include<iostream>

using namespace std;

int main(){

int arr[]={3,4,5,6,7,1,2,3,78};
int n= end(arr)-begin(arr);
int key =4;
bool found = false;
int ind = 0;
for(int i=0;i<n;i++){
   if(key==arr[i])
    {
    found=true;
    ind=i;
    break;
    }


}

if(found){
    cout<<"Element is present at index " <<ind;
}
else{
    cout<<"Element is not present in array";
}

    return 0;
}