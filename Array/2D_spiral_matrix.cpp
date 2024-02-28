// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
  
  int count = 1;
  int n = 6;
  int ar[n][n] = {}; 
  
//   for( int i = 0;i < n; i++){
//     for(int j = 0; j < n; j++)
//         ar[i][j] = i * n +j;
//   }      
  
  
  for( int i = 0;i < n; i++){
    for(int j = 0; j < n; j++)
        ar[i][j] = 0;
   }      
  
  
   int top = 0;
   int left = 0 ;
   int right = n - 1;
   int bottom = n - 1;
  
  while(top <= bottom){
    for(int i = top; i <= right; i++)
       ar[top][i] = count++;
    top++;
    
    for(int i = top ; i <= bottom; i++)
        ar[i][right] = count++;
    right--;
    
    for(int i = right; i >=left; i--)
     ar[bottom][i] = count++;
   bottom--;
  
    for(int i = bottom; i>=top; i--)
     ar[i][left] = count++; 
   left++;
  }
   
   
  for( int i = 0;i < n; i++){
    for(int j = 0; j < n; j++)
        cout<<ar[i][j]<<"\t";
  
  cout<<endl;  
  }    
    return 0;
}