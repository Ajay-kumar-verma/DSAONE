#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v){
  
// for(int i=0;i<v.size();i++){
//     cout<< v[i] << " ";
// }

for(auto ele:v)
{
    cout<<ele<<" ";
}

cout<<endl;
}

int main(){
vector<int>x;
int n=10;

for(int i=0;i<n;i++){
    cout<<x.size()<<"\t"<<x.capacity()<<endl;
    x.push_back(i);
}

//  It is like stack
print(x);
x.pop_back();
print(x);
x.pop_back();
print(x);
x.pop_back();
print(x);
x.pop_back();

x.clear();
print(x);
cout<<"Size"<<x.size()<<" Capacity"<<x.capacity();

//  vector<int>v1;
//  vector<int>v2(3,-1);
//  vector<int>v3={3,2,1,6,7};




    return 0;
}
