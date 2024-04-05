#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    
    vector<int> v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(-6);
    v.push_back(2);
    v.push_back(1);
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    //bubble
    for(int j=0;j<4;j++){
    for(int i=0;i<4;i++){
    if(v[i]>v[i+1]) swap(v[i],v[i+1]);
    }}
    
    //selection
    for(int i=0;i<v.size()-1;i++){
        int min = INT_MAX;
        int minidx = -1;
        for(int j=i;j<v.size();j++){
        if(v[j]<min){ 
        min = v[j];
        minidx = j;}
        }
        swap(v[i],v[minidx]);
    }
    //insertion
    for(int i=1;i<v.size();i++){
        int j = i;
        while(j>=0){
            if(v[j]>v[j-1]) break;
            else swap(v[j],v[j-1]);
            j--;
        }
    }


    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
}