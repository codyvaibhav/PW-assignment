#include <stdio.h>
#include <iostream>
#include <stack>
using namespace std;

int main(){
    //pop ans push
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int pge[n];
    pge[0] = -1;
    stack<int> st;
    st.push(arr[0]);
    for(int i=1;i<=n-1;i++){
        while(st.size()>0 && st.top()<=arr[i]) st.pop();
        if(st.size()==0) pge[i] = -1;
        else pge[i] = st.top();
        st.push(arr[i]);
    }
    // for(int i=0;i<n;i++){
    //     cout<<pge[i]<<" ";
    // }
    int pgi[n];
    pgi[0] = 1;
    stack<int> st1;
    st.push(arr[0]);
    for(int i=1;i<=n-1;i++){
        while(st1.size()>0 && arr[st1.top()]<=arr[i]) st1.pop();
        if(st1.size()==0) pgi[i] = -1;
        else pgi[i] = st1.top();
        pgi[i] = i-pgi[i];
        st1.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<pgi[i]<<" ";
    }
    cout<<endl;
}