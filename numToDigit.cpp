#include<iostream>

using namespace std;

void digits(int n){

 if(n<=0){
    return;
 }
  int b=n%10;
  digits(n/=10); 
  cout<<b;
  cout<<endl;

}  



int main(){
int n=0;
cout<<"Enter number to gets all digits: ";
cin>>n;
digits(n);
  
  return 0;
}