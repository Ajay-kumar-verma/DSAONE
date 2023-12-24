#include<iostream>
#include<string>
#include<cmath>
using namespace std;


int Dec(int b){

int d=0;

int i=0;
while(b>0){
int r = b%10;
d=pow(2,i++)*r+d;
b=b/10;

}


return d;

}

int Bin(int d){
int bin=0;
int i=0;

while(d>0){ 
 int bit=d%2;  // (d&1) for getting last bit
 bin =bit*pow(10,i++)+bin; 
 d=d/2; // d>>1 , It gets divided by 2
}

return bin;
}


int main(){
 int decimal=0;
 cout<<"Enter decimal number."<<endl;
 
 cin>>decimal;
 
 cout<<Bin(decimal)<<endl;
 cout<<"Enter Binary number."<<endl;
 int binary=0;
 cin>>binary;
 cout<<Dec(binary);
   return 0;
}