#include<iostream>

using namespace std;

void max(int ar[],int n){
  
  int max=ar[0];

  for(int i=1;i<n;i++){
   if(max<ar[i])
   max=ar[i];
  }

cout<<"MAX ele is:"<<max;
}


void min(int ar[],int n){
  
  int min=ar[0];

  for(int i=1;i<n;i++){
   if(min>ar[i])
   min=ar[i];
  }

cout<<"MIN ele is:"<<min;

  int max=ar[0];

  for(int i=1;i<n;i++){
   if(max<ar[i])
   max=ar[i];
  }

cout<<"MAX ele is:"<<max;


}


void max_min(int ar[],int n){
 
  int min=ar[0];
  int max=ar[0];

 for(int i=1;i<n;i++){
   if(min>ar[i])
   min=ar[i];
   if(max<ar[i])
   max=ar[i];
  }

cout<<"MIN ele is:"<<min<<endl;
cout<<"MAX ele is:"<<max<<endl;


}


void max_So_far(int ar[],int n){
    
    int msf =INT_MIN;
    int smn =INT_MIN;
   
    for(int i=0;i<n;i++){
      if(msf<ar[i])
       msf=ar[i];
    }


for(int i=0;i<n;i++){
 
  if(msf>ar[i] && smn<ar[i])
    smn=ar[i];
}

  cout<<msf<<", ";
  cout<<smn<<endl;



}

int main() {

int ar[]={2,3,1,4,5,6,7,8,4,2,70,98,65,45,67,21};

// int n= sizeof(ar)/sizeof(ar[0]);
int n= end(ar)-begin(ar);
// max(ar,n);
// cout<<endl;
// min(ar,n);
// max_min(ar,n);
max_So_far(ar,n);


    return 0;
 }