#include<iostream>

using namespace std;

int main(){
// Aloow to change the datatype a variable to another variable 

// int to char 
// char to int 
// int to float
// float to int 
// int to double 
// etc

//crucial when we perform operation with difference data-type 

// 1 implicit type (Automatic type )
// 2 explicit type (Automatic type )


//  float x= 20.5;
//  float y = 30.5;

//  int  result = x+y;

//  cout<<result<<endl;
//   All are above implicit 

// char c= 'A';
// int ch= c+1;

// cout<<ch<<endl;

// Explicit  Manual converting 


float f= (int)30.9;   // Doing manually 
cout<<f<<endl;


float x= 20.5;
 float y = 30.5;
 int  result = (int)x+(int)y;

char c= (char)45.67;

cout<<(10/3)<<endl;  // MUST CHECK 
cout<<((float)10/(float)3)<<endl; 
cout<<((float)10/3)<<endl; 
cout<<(10/(float)3)<<endl; 





return 0;
}
