#include<iostream>

using namespace std;

int rev(int n){

 int reverse = 0;

 while(n>0){
 int r= n%10;
 reverse = reverse*10+r;
  n/=10;
 }

return reverse;

}


int main(){

cout<<rev(3456);
    
    return 0;
}