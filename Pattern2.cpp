#include<iostream>

using namespace std;

void hloPyd(int n){
for(int i=0;i<n;i++){

   for(int j=0;j<n-i;j++){
     cout<<"* ";
   } 

    for(int k=0;k<i;k++){
     cout<<"  ";
    }

    for(int k=0;k<i;k++){
     cout<<" ";
    }

  for(int j=0;j<n-i;j++){
     cout<<"*  ";
   } 

cout<<endl;

}
}

void num(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
       
       if(j>0)
        cout<<"*";
        cout<<1+i;
    }
cout<<endl;
 }

}

void Alpha(int n){
 
 for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        char c= j+'A';
      cout<<c<<" ";
    }
    
    for(int j=1;j<=i;j++){
      char c=i+'A'-j;   
      cout<<c<<" ";
    }

 cout<<endl;
 }


}


void NumP(int n){

for(int i=0;i<n;i++){
   for(int j=0;j<n-1-i;j++){
    cout<<"  ";
   }

 for(int k=0;k<i+1;k++){
  cout<<k+1<<" ";
 }
 
 for(int k=0;k<i;k++){
   cout<<i-k<<" ";
 }
  
cout<<endl;



}


}


int main(){
//   hloPyd(7);
//  num(6);
// Alpha(13);
NumP(10);
   return 0;
}