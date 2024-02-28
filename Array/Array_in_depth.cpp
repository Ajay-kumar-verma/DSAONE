#include <iostream>

using namespace std;

int main(){
 
//  int ar[] = {3,4,5,6};

//  int *ar =  new int[4];
//    *ar = 4;
//    *(ar + 1) = 9;
//    *(ar + 2) = 7;
//    *(ar + 3) = 11;

 // for(auto i : ar) cout << i <<" "; 
 // for(int i = 0; i < 4; i++) cout<<ar[i]<<" ";
 // for(int i = 0; i < 4; i++) cout<<*(ar + i)<<" ";
//   delete  [] ar;

// ----------------------------------------

// int **ar = new int*[3];

// for(int  i = 0; i < 3; i++)
// { 
//   *(ar + i) = new int[2];

//  for( int j = 0; j < 2 ;j++)
//     *(*(ar+i)+j) = j + i*2;
// }    

// for(int i = 0; i < 3; i++){
//     for(int j =0; j < 2; j++)
//     {
//            cout<<ar[i][j]<<" ";
//     }  
//    cout<<endl; 
//      }


 int **ar = new int*[2];
  
  *ar = new int[2];
  ar[0][0] = 2;
  ar[0][1] = 5;

  *(ar + 1) = new int[1];
   ar[1][0] = 8;

 for(int i =  0; i < 2; i++){

  for(int j = 0; j <sizeof(ar[i])/sizeof(ar[i][0]); j++)
     cout<<ar[i][j]<<" ";

   cout<<endl;

 }


// int a3[2][3] = {1,2,3,4,5,6};    // equivalent to {{1,2,3},{4,5,6}}
// int a4[2][4] = {1,2,3,4,5,6};    // equivalent to {{1,2,3,4},{5,6}}
// int a5[2][5] = {1,2,3,4,5,6};    // equivalent to {{1,2,3,4,5},{6}}
// int a6[2][6]   = {1,2,3,4,5,6};  // equivalent to {{1,2,3,4,5,6}}
// int a10[2][10] = {1,2,3,4,5,6};  // equivalent to {{1,2,3,4,5,6}


// https://stackoverflow.com/questions/68047223/why-is-it-mandatory-to-specify-number-of-columns-while-declaring-initializing-mu
    return 0;
}