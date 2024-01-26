#include<iostream>

using namespace std;


void incr(int n){
    n++;
}


void incrs(int&n){
    n++;
}


int main(){
int n=10;
incr(n);
cout<<n<<endl;
incrs(n);
cout<<n;

return 0;
}