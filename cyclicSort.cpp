#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
void cycleSort(int arr[],int i,int n){
    while(i<n){
        int correctIdx = arr[i]-1;
        if(i==correctIdx) i++;
        else swap(arr[i],arr[correctIdx]);
    }
}


int main(){
     int arr[] = {6,1,4,3,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
    cycleSort(arr,0,n);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}