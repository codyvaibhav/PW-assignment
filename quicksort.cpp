#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int partition(int arr[],int si,int ei){
    int count = 0;
    int pivotEle = arr[si];     //si -> si+ei/2
    for(int i =si+1;i<=ei;i++){
        if(arr[i]<=pivotEle) count++;
    }
    int pivotIdx = count + si;
    swap(arr[si],arr[pivotIdx]);

    int i = si, j = ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotEle) i++;
        if(arr[j]>pivotEle) j--;
        else if(arr[i]>pivotEle && arr[j]<=pivotEle) 
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    return pivotIdx;
}
void quickSort(int arr[],int si, int ei){
    if(si>=ei) return; //base

    int pi = partition(arr,si,ei);
    quickSort(arr,si,pi-1);
    quickSort(arr,pi+1,ei);
    
}
int kthSmallest(int arr[],int si,int ei,int k){  //kthSmallest - Application
    int pi = partition(arr,si,ei);
    if(pi+1==k) return arr[pi];
    else if(pi+1<k) return kthSmallest(arr,pi+1,ei,k);
    else return kthSmallest(arr,si,pi-1,k);
}

int main(){ //quick sort
    int arr[] = {5,10,82,2,57,63,-3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k = 6;
    cout<<k<<"th Smallest: "<<kthSmallest(arr,0,n-1,k);
}
//TC = O(nlogn)
//SC = logn
//unstable