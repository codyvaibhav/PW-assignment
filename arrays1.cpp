#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std; 

void display(vector<int>&v){
  for(int i=0;i<5;i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
int main(){
    //to find kth largest number in an array
  int arr[]= {2,4,7,8,3};
  vector<int> v(5);

  for(int i=0;i<5;i++){
    int q;
    cin>>q;
    v.push_back(q);
  }
  cout<<endl;
   display(v);
   

 
}