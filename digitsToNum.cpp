#include<iostream>

using namespace std;

int num(int n){
int no=0;

 for(int i=0;i<n;i++){
   int d=0;
   cin>>d;
   no=no*10+d;
 }

return no;
} 



int main(){

 int n=0;
 cout<<"Enter no of digits to converts into a number: ";
 cin>>n;
 cout<<num(n);
 return 0;

}
