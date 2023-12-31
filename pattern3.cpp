#include <iostream>

using namespace std;

void hlp(int n){

  for(int i=0;i<n;i++){
   for(int j=0;j<i+1;j++){
       if(j==0 || j==i||i==n-1)       // j==0 print at first column , j==i print diogonally and i == n-1 print 
       cout<<j+1<<" ";
       else
       cout<<"  ";
   }
  cout<<endl;
  }
}


void ivtd(int n){

 for(int i=0;i<n;i++){
   for(int j=0;j<n-i;j++){
    if(i==0 || j==0 ||j==n-i-1||i==n-1)
    cout<<i+1+j<<" ";
    else cout<<" "<<" ";
   }

    cout<<endl;
 }
}

void pet(int n){
 
 for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<"   ";
    }
        for(int k=0;k<i+1;k++){
        cout<<1+k<<"  ";
    }
    for(int p=0;p<i;p++){
        cout<<i-p<<"  ";
    }
  cout<<endl;  
 }

}

void ft(int n){
int x=1;

  for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
     cout<<x++<<" ";
    }
      cout<<endl;
  }

}

void btfy(int n){

 for(int i=0;i<n;i++){

    for(int j=0;j<i+1;j++)
    cout<<j+1<<"  ";
    

    for(int j=0;j<2*(n-i-1);j++)
    cout<<"   ";
   
    for(int j=0;j<i+1;j++)
    cout<<j+1<<"  ";
   

 cout<<endl;
    }

for(int i=0;i<n;i++){

   
     for(int j=0;j<n-i;j++)
    cout<<j+1<<"  ";
   
    

    for(int j=0;j<2*i;j++)
    cout<<"   ";

   

    for(int j=0;j<n-i;j++)
    cout<<j+1<<"  ";
   

 cout<<endl;
    }

}

int main(){
 
//  hlp(6);  
//  ivtd(10);
//  pet(6);
//   ft(6);
btfy(8);
return 0;

}