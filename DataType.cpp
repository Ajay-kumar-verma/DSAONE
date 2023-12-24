#include<iostream>

using namespace std;

int main(){
// DataType.cpp:6:9: warning: implicit 
//conversion from 'long' to 'int' changes value from 45252355904 to -1992284352 [-Wconstant-conversion]
int x= 45252355904;
cout<<x;
// DataType.cpp:6:9: warning: implicit
// conversion from 'long' to 'int' changes value from -45252355904 to 1992284352
int y= 45252355904;
cout<<y;

// z value can be any garbage value in c and cpp
int z;
cout<<"\nZ value ";
cout<<z;
cout<<endl;
cout<<"Character in cpp\n";

// CHAR , size of char is 1byte(8bits) it can have only 256 different character 

char c= -14;
cout<<c<<endl; 

// INT , size of int is 4bytes(32bits). it can store number lies in between fixed vaslues   
// LONG , size of log is 8bytes(64bits).it can store number lies in between fixed vaslues 


int i ='*'; // it gets store in RAM as integer(bits) 
cout<<i<<endl;
cout<<sizeof(i); // It gives ouput in byte 

cout<<endl;
char c1=100;
cout<<c1;

return 0;

}

