#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void merge(vector<int> &v1,vector<int> &v2,vector<int> &res){
    int i=0;
    int j=0;
    int k=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<v2[j]) res[k++]=v1[i++];
        else res[k++]=v2[j++];
    }
    if(i==v1.size())
    while(j<v2.size()) res[k++]=v2[j++];
    if(j==v2.size())
    while(i<v1.size()) res[k++]=v1[i++];
}
void mergeSort(vector<int> &v){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2;
    int n2 = n-n/2;
    vector<int> a(n1),b(n2);
    //copy pasting
    for(int i=0;i<n1;i++){
        a[i] = v[i];
    }
    for(int i=0;i<n2;i++){
        b[i] = v[i+n1];
    }
    mergeSort(a);
    mergeSort(b);
    merge(a,b,v);
}
int main(){
    int arr[]= {2,4,9,10};
    int n1 = 4;
    int brr[]= {1,5,8};
    int n2 = 3;
vector<int> v1(arr,arr+n1);
vector<int> v2(brr,brr+n2);
vector<int> res(n1+n2);
//merge(v1,v2,res);
//for(int i=0;i<v1.size()+v2.size();i++){
//    cout<<res[i]<<" ";
int crr[]= {2,14,8,6,9,1,7};
int n = 7;
vector<int> v(crr,crr+n);
mergeSort(v);
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}

}