#include <iostream>

using namespace std;

int main(){

int ar[] = {1,2,3,5,6,7};
 int n =sizeof(ar)/sizeof(ar[0]);

int low = 0;
int high = n-1;

int mis = -1;

while(low<=high){
  int mid = low +(high - low)/2;
  if(ar[mid]-mid == 1)
   low = mid + 1;
  else{
     mis = ar[mid];
     high = mid -1;
  }  


}

cout<<mis-1<<"Missing elements";





    return 0;
}