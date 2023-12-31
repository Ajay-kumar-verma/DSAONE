#include<iostream>

using namespace std;

int max(int a,int b);

int main(){

cout<<max(max(2,41),10);
    return 0;
}


int max(int a,int b){
return (a>b)?a:b;
}