#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
void makezero(int arr[3][3],int size,int a,int b){
            for(int k=0;k<size;k++){
                arr[k][a]=0;
                arr[b][k]=0;
            }
        }

// void setZeroes(vector<vector<int> >& matrix) {
        
//         int m = matrix.size();
//         int n = maxtrix[0].size();

//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++):
//             if(matrix[i][j]==0)
//             makezero(matrix,m,i);
//             // makezero(maxtrix,n,j);

//         }
//     }
    int main(){
            int arr[3][3];
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j]=(i+1)*(j+1);
        }    
     } 
     //printing
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;}   
     cout<<endl;
     makezero(arr,3,2,2);
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;}
    }