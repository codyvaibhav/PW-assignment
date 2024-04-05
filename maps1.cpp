#include <stdio.h>
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first = "vaibhav";
    p1.second = 34;
    m.insert(p1);
    cout<<p1.first<<" "<<p1.second<<endl;
    m["harsh"] = 15;
    for(auto p : m) cout<<p.first<<" "<<p.second<<endl;
}