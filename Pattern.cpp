#include<iostream>
using namespace std;

void Sqr(int a){
for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
        cout<<" * ";
    }  
    cout<<endl;
}

}
void Rect(int l,int b){

for(int i=0;i<b;i++){
    for(int j=0;j<l;j++){
        cout<<" * ";
    }
    cout<<endl;
}
}

void HloRect(int l, int b){
  
  for(int i=0;i<b;i++){
    for(int j=0;j<l;j++){
        if(i==0 || j==0 || j==l-1 || i==b-1)
         cout<<" $";
        else
        cout<<"  ";
    }

    cout<<endl;
     }

}

void X(int x){

//  for(int i=0;i<=2*x;i++){
//      for(int j=0;j<=2*x;j++){
       
//         if(i+j==2*x)
//          cout<<" # ";
//         else
//          cout<<"1";

//         if(i==j)
//          cout<<" * ";
//         else
//          cout<<"2";
//      }


//   cout<<"\n";
//  }

 for(int i=0;i<=2*x;i++){
     for(int j=0;j<=2*x;j++){
      if(i==j || i+j==2*x)
       cout<<"$";
      else
       cout<<" ";      
  
     }


  cout<<"\n";
 }
}

void Tri(int t){

for(int i=0;i<=t;i++){
    for(int j=0;j<i+1;j++){
        cout<<"*";

    }
    cout<<endl;
}

for(int i=0;i<=t;i++){
    for(int j=0;j<t- i+1;j++){
        cout<<"*";

    }
    cout<<endl;
}

for(int i=0;i<=t;i++){
    for(int j=0;j<i+1;j++){
        cout<<j+1;

    }
    cout<<endl;
}


}

int main(){
  Sqr(3);
  cout<<endl;
  Rect(6,4);
  cout<<endl;
  X(6);
  cout<<endl;
  HloRect(6,4);
  cout<<endl;
  Tri(5);
    return 0;
}