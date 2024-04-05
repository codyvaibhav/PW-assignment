#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std; 

void display(vector<int>&v){
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";}
  cout<<endl;
  }

int maxima(vector<int>&height){
    int n = height.size();
        int max = height[0];
        for(int i=0;i<n;i++){
            if(max<height[i]) max = height[i];
        }
        int smax = height[0];
        for(int i=0;i<n;i++){
            if(smax<height[0] && smax!=max) smax = height[i];
        }
        return smax;
}

int main(){
    vector<int> height;
    height.push_back(3);
    height.push_back(5);
    height.push_back(6);
    height.push_back(7);
    height.push_back(1);

    int n = height.size();
        int max = height[0];
        int x = 0;
        for(int j=0;j<n;j++){
            if(height[j]>max) max = height[j];
            j = x;
        }
        int smax = height[0];
        int y = 0;
        for(int i=0;i<n;i++){
            if(height[i]>smax && (smax!=max)) smax = height[i];
            i = y;
        }
        int area = (x-y)*smax;
        cout<<max<<endl<<smax<<endl<<area;  
}