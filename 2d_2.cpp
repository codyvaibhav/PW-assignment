#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int> > generate(int numRows){
        int n = numRows;
        vector<vector<int> > v;
        for(int i=1;i<=n;i++){
         vector<int> a(i);
         v.push_back(a);
        } 
        
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                if(j==0 || j==i) v[i][j]=1;
                else v[i][j] = v[i-1][j] + v[i-1][j-1];
            } 
    }
    return v;
}

int main(){
    // int arr[3][3];
    //  for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         arr[i][j]=(i+1)*(j+1);
    //     }    
    //  } 
    //  //printing
    //  for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;}   
    //  cout<<endl;   

    vector<vector<int> > v=generate(5); 

    
      for(int i=0;i<v.size();i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
         }
}
