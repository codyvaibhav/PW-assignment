#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
string s = "abcdef";
for(int i =0;i<s.size();i++){
cout<<s[i]<<" ";}

reversee(s,0,4);
for(int i =0;i<s.size();i++){
cout<<s[i]<<" ";}
}

void reversee(string str,int a,int b){
    int i=a;
    int j=b;
    while(i<=j){
        swap(str[i],str[j]);
        i++;
        j--;} 
}        