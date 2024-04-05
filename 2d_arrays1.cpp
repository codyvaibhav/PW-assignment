#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
void swapp(int x,int y){
    int temp = x;
    x = y;
    y = temp;
}
void transpose(int arr,int a, int b){
for(int i=0;i<a;i++){
        for(int j=i+1;j<b;j++){
            swapp((arr[i][j]),(arr[j][i]));
        }
}
}
void reverse(int arr, int low, int high){
    for(int i=0;i<3;i++){
        int low = arr[i][0];
        int high = arr[i][2];
       // reverse(arr[i][1],arr[i][3]);
       while(low<high){
       int temp = arr[i][0];
       arr[i][0]=arr[i][2];
       arr[i][2]=temp;
       high--;
       low++;
       }
}
}
void printArray(int arr,int x,int y){
    //printing 2d array
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    }
int main(){
    int m,n;
    cout<<"enter no. of rows and columns\n";
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    
                 

}