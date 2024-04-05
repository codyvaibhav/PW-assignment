#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string str = "vaibhav";
    //getline(cin,str);
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp)
    v.push_back(temp);
    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int count = 1;
    int maxcount = 1;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]==v[i+1]) count++;
        else count = 1;
        maxcount = max(maxcount,count);
    }
    cout<<maxcount;
}