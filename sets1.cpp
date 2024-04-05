#include <stdio.h>
#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    int target = 56;
    if(s.find(target)!=s.end()) cout<<"exists\n";
    for(int ele : s){
        cout<<ele<<" ";
    }
}